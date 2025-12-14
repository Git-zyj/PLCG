#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)40051;
long long int var_7 = -8222464966017153864LL;
short var_15 = (short)-19666;
int zero = 0;
int var_18 = -1692341960;
short var_19 = (short)25073;
unsigned short var_20 = (unsigned short)23471;
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
