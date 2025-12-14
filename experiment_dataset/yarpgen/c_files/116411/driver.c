#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_3 = (_Bool)1;
short var_4 = (short)-18452;
unsigned int var_5 = 615889186U;
signed char var_8 = (signed char)-76;
int var_15 = 1152400458;
int zero = 0;
short var_20 = (short)17582;
short var_21 = (short)-23528;
void init() {
}

void checksum() {
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
