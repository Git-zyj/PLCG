#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3174420850U;
_Bool var_7 = (_Bool)1;
long long int var_10 = 5935067591506113119LL;
unsigned short var_17 = (unsigned short)59880;
int zero = 0;
unsigned short var_18 = (unsigned short)65063;
unsigned char var_19 = (unsigned char)71;
long long int var_20 = 4345348070284946611LL;
short var_21 = (short)-23909;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
