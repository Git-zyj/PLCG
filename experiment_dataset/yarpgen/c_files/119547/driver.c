#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 10115996167304560780ULL;
int var_5 = 1264942149;
int var_6 = 189747231;
_Bool var_11 = (_Bool)0;
int var_15 = -1585865149;
int zero = 0;
signed char var_18 = (signed char)127;
unsigned int var_19 = 269968559U;
unsigned int var_20 = 4270668824U;
unsigned short var_21 = (unsigned short)46895;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
