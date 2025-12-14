#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)2932;
int var_7 = 1398310149;
unsigned short var_8 = (unsigned short)35602;
short var_11 = (short)-25704;
int zero = 0;
unsigned long long int var_13 = 13278160646400133970ULL;
unsigned long long int var_14 = 701014204171856068ULL;
int var_15 = -295873866;
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
