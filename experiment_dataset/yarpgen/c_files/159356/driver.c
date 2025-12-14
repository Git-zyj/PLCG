#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)1047;
unsigned short var_2 = (unsigned short)35612;
unsigned int var_3 = 1546315106U;
unsigned char var_4 = (unsigned char)43;
unsigned long long int var_8 = 12871600101750745955ULL;
int zero = 0;
unsigned int var_10 = 1987444907U;
signed char var_11 = (signed char)126;
long long int var_12 = 3880682158418995319LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
