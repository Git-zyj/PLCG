#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_10 = 3954288673U;
unsigned int var_13 = 372257278U;
unsigned short var_16 = (unsigned short)14475;
unsigned int var_18 = 547256576U;
int zero = 0;
unsigned long long int var_19 = 11943148812049078956ULL;
unsigned long long int var_20 = 1852257788775730517ULL;
unsigned char var_21 = (unsigned char)5;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
