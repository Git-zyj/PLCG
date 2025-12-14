#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 12744060081305980775ULL;
int var_5 = 1632677654;
unsigned char var_7 = (unsigned char)248;
int zero = 0;
short var_14 = (short)16427;
unsigned short var_15 = (unsigned short)56398;
short var_16 = (short)13643;
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
