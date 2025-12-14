#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 461872076U;
unsigned short var_6 = (unsigned short)13403;
int var_7 = 244114559;
unsigned short var_14 = (unsigned short)24817;
int zero = 0;
unsigned long long int var_16 = 2314937589991644152ULL;
unsigned short var_17 = (unsigned short)1117;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
