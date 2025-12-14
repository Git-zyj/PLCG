#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)27498;
signed char var_1 = (signed char)-68;
short var_4 = (short)-30032;
signed char var_7 = (signed char)37;
unsigned short var_10 = (unsigned short)22707;
int var_12 = -1846301381;
unsigned short var_13 = (unsigned short)56484;
int zero = 0;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)18;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
