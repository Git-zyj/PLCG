#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-47;
short var_6 = (short)-7641;
unsigned short var_7 = (unsigned short)41967;
short var_8 = (short)4970;
int zero = 0;
short var_15 = (short)10725;
unsigned short var_16 = (unsigned short)36516;
long long int var_17 = 896643398171872822LL;
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
