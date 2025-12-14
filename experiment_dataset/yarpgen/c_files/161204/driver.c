#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)1700;
_Bool var_3 = (_Bool)0;
unsigned char var_6 = (unsigned char)12;
_Bool var_7 = (_Bool)1;
unsigned long long int var_10 = 12976385018658705941ULL;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)83;
int zero = 0;
unsigned long long int var_15 = 9741412680874293836ULL;
unsigned int var_16 = 4272824156U;
unsigned short var_17 = (unsigned short)24348;
int var_18 = 1255126997;
signed char var_19 = (signed char)-94;
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
