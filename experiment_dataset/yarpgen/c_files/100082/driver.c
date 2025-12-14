#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1768041693;
int var_3 = 1988044843;
unsigned char var_7 = (unsigned char)197;
signed char var_9 = (signed char)-16;
short var_11 = (short)174;
unsigned int var_12 = 2910082379U;
long long int var_13 = -3015826290849914027LL;
int zero = 0;
signed char var_15 = (signed char)72;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
