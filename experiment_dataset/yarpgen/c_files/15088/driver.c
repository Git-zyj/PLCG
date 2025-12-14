#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 170845116U;
unsigned short var_2 = (unsigned short)43147;
_Bool var_8 = (_Bool)1;
long long int var_10 = 3831595860972932447LL;
_Bool var_12 = (_Bool)1;
signed char var_15 = (signed char)-13;
unsigned char var_17 = (unsigned char)140;
int zero = 0;
signed char var_20 = (signed char)-16;
unsigned short var_21 = (unsigned short)11463;
unsigned long long int var_22 = 3672611520022792095ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
