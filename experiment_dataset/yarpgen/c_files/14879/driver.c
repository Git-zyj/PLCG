#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_10 = 17401349961858091783ULL;
unsigned long long int var_11 = 2323343491779348783ULL;
short var_15 = (short)17602;
int zero = 0;
unsigned short var_16 = (unsigned short)61471;
short var_17 = (short)-2250;
void init() {
}

void checksum() {
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
