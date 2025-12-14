#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 15795968025446862971ULL;
unsigned short var_5 = (unsigned short)8482;
unsigned char var_12 = (unsigned char)226;
int zero = 0;
int var_13 = 1958707519;
unsigned int var_14 = 239860324U;
unsigned long long int var_15 = 12629295358632230701ULL;
void init() {
}

void checksum() {
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
