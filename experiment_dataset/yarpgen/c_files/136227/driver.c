#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 172810434U;
unsigned int var_4 = 2813759282U;
short var_5 = (short)-11833;
unsigned short var_6 = (unsigned short)55181;
unsigned short var_7 = (unsigned short)53254;
short var_8 = (short)17196;
unsigned long long int var_9 = 15911115541848599123ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)79;
unsigned long long int var_14 = 14438530814035812979ULL;
unsigned int var_15 = 2557791183U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
