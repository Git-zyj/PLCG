#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)158;
unsigned long long int var_3 = 2923348692967465897ULL;
unsigned long long int var_7 = 8771449589387320039ULL;
unsigned long long int var_8 = 6403261029574974606ULL;
short var_12 = (short)-25561;
short var_14 = (short)16531;
int zero = 0;
unsigned long long int var_15 = 9947232154785596418ULL;
short var_16 = (short)-2881;
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
