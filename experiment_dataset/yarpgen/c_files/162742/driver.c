#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2751119329U;
long long int var_1 = -2525626601835167713LL;
unsigned long long int var_6 = 18085322544176939610ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)161;
long long int var_19 = -2231352909114002463LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
