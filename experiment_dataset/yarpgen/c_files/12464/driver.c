#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1851205437056032091LL;
unsigned int var_3 = 3603706362U;
long long int var_8 = -7183659050975118940LL;
unsigned int var_18 = 2705760713U;
int zero = 0;
unsigned short var_19 = (unsigned short)56566;
short var_20 = (short)-26968;
signed char var_21 = (signed char)-9;
void init() {
}

void checksum() {
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
