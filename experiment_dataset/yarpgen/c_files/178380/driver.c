#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 1741236145U;
unsigned long long int var_8 = 15535007381710414904ULL;
unsigned long long int var_11 = 10479184346421865569ULL;
unsigned short var_12 = (unsigned short)56156;
unsigned long long int var_13 = 16815113534057035711ULL;
int zero = 0;
unsigned long long int var_14 = 14681791331018224367ULL;
short var_15 = (short)22036;
unsigned long long int var_16 = 16358366205325169082ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
