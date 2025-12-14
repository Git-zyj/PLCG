#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2738915739U;
unsigned short var_5 = (unsigned short)16476;
unsigned short var_7 = (unsigned short)63617;
int zero = 0;
unsigned long long int var_14 = 15545299563631318851ULL;
unsigned int var_15 = 582941351U;
unsigned int var_16 = 2713136156U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
