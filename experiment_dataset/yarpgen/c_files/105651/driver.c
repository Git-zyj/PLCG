#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1941287335U;
unsigned short var_6 = (unsigned short)33770;
unsigned short var_9 = (unsigned short)23054;
unsigned short var_12 = (unsigned short)18290;
signed char var_15 = (signed char)-46;
unsigned int var_18 = 2644852145U;
int zero = 0;
unsigned long long int var_19 = 9025415249971406850ULL;
short var_20 = (short)1185;
void init() {
}

void checksum() {
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
