#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)19220;
int var_10 = 1093472454;
unsigned long long int var_11 = 8142127034551305399ULL;
int zero = 0;
unsigned long long int var_16 = 5256427797960415827ULL;
unsigned int var_17 = 1666669914U;
long long int var_18 = 4028151676733416951LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
