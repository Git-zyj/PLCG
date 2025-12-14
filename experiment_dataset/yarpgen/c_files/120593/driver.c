#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6647113744672270408ULL;
_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)-112;
long long int var_4 = 1944625737176217091LL;
signed char var_5 = (signed char)-101;
short var_6 = (short)15469;
unsigned long long int var_7 = 12767889325085808069ULL;
_Bool var_8 = (_Bool)1;
long long int var_10 = 181265879354592607LL;
unsigned short var_11 = (unsigned short)11901;
int zero = 0;
short var_15 = (short)-23099;
unsigned short var_16 = (unsigned short)15747;
_Bool var_17 = (_Bool)0;
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
