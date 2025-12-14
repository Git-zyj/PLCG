#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)17721;
signed char var_4 = (signed char)-77;
unsigned short var_16 = (unsigned short)45607;
int zero = 0;
short var_17 = (short)12045;
short var_18 = (short)6706;
int var_19 = 1896027281;
unsigned short var_20 = (unsigned short)39080;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
