#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)18054;
unsigned int var_7 = 2995492069U;
int zero = 0;
long long int var_11 = 9173181838094354202LL;
unsigned int var_12 = 219126683U;
unsigned int var_13 = 1104190684U;
unsigned long long int var_14 = 7825144774392430341ULL;
signed char var_15 = (signed char)54;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
