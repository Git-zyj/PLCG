#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 4552700328868933009ULL;
unsigned long long int var_3 = 577281053799009904ULL;
unsigned long long int var_7 = 7347415789894541586ULL;
short var_12 = (short)24133;
unsigned long long int var_13 = 14216079495485711509ULL;
int zero = 0;
unsigned long long int var_15 = 3505345471296006526ULL;
short var_16 = (short)-26698;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
