#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1579510619U;
unsigned char var_7 = (unsigned char)218;
unsigned short var_8 = (unsigned short)53271;
unsigned short var_9 = (unsigned short)14020;
unsigned short var_13 = (unsigned short)61795;
_Bool var_14 = (_Bool)1;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 1810824378U;
unsigned int var_17 = 3014479153U;
signed char var_18 = (signed char)-100;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
