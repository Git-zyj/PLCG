#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 8610629757650452135LL;
unsigned short var_10 = (unsigned short)3479;
long long int var_11 = -6694150938395401369LL;
unsigned long long int var_14 = 382956963783195427ULL;
int zero = 0;
unsigned long long int var_15 = 2187693099613105703ULL;
int var_16 = 1394770378;
unsigned int var_17 = 3672768842U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
