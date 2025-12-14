#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)60697;
unsigned int var_1 = 987708208U;
unsigned int var_5 = 193739233U;
unsigned short var_7 = (unsigned short)30651;
unsigned int var_11 = 557583482U;
signed char var_12 = (signed char)-38;
short var_13 = (short)-19156;
short var_15 = (short)24837;
signed char var_16 = (signed char)-48;
short var_18 = (short)-23193;
int zero = 0;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)63;
int var_21 = 131351439;
unsigned int var_22 = 3006619199U;
void init() {
}

void checksum() {
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
