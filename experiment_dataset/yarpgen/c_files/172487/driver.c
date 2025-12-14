#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 836342414U;
int var_13 = -1134935080;
unsigned char var_14 = (unsigned char)164;
int zero = 0;
long long int var_15 = -4766654728850844497LL;
unsigned long long int var_16 = 5093863836805107504ULL;
unsigned char var_17 = (unsigned char)146;
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
