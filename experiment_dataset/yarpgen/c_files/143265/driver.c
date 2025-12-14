#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)9865;
signed char var_1 = (signed char)31;
long long int var_3 = 6646717771437230747LL;
unsigned int var_4 = 3418708283U;
signed char var_5 = (signed char)32;
int var_6 = 739659233;
unsigned int var_11 = 1624060318U;
unsigned int var_16 = 2968416794U;
int zero = 0;
long long int var_19 = 5772693592940292718LL;
unsigned char var_20 = (unsigned char)118;
unsigned char var_21 = (unsigned char)19;
_Bool var_22 = (_Bool)0;
short var_23 = (short)-7788;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
