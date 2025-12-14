#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 2797186519776145070LL;
unsigned long long int var_7 = 3142600766603337963ULL;
short var_10 = (short)-17324;
long long int var_11 = 600688811069859753LL;
int zero = 0;
unsigned long long int var_12 = 12692013637648998769ULL;
unsigned char var_13 = (unsigned char)199;
unsigned char var_14 = (unsigned char)38;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
