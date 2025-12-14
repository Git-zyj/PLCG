#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)46891;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)1;
unsigned short var_6 = (unsigned short)11645;
_Bool var_7 = (_Bool)1;
int var_8 = 612822106;
signed char var_9 = (signed char)-2;
signed char var_11 = (signed char)15;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)46074;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned long long int var_18 = 2415467121126830683ULL;
signed char var_19 = (signed char)0;
unsigned short var_20 = (unsigned short)20671;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
