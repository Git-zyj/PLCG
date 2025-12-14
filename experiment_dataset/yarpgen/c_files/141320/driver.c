#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7708592890857257588ULL;
unsigned short var_3 = (unsigned short)56600;
unsigned long long int var_6 = 14371610024860697158ULL;
int var_7 = 1147716903;
int zero = 0;
unsigned long long int var_12 = 5256861229553392133ULL;
unsigned long long int var_13 = 8246193612422270843ULL;
short var_14 = (short)-16377;
unsigned char var_15 = (unsigned char)178;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
