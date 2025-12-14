#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3154523409U;
unsigned int var_5 = 335061131U;
short var_7 = (short)7626;
unsigned char var_8 = (unsigned char)208;
int zero = 0;
short var_14 = (short)26525;
unsigned long long int var_15 = 8069261028641332456ULL;
void init() {
}

void checksum() {
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
