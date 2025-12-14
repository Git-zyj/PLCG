#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11780529357466135846ULL;
long long int var_2 = 4608195509386772799LL;
int var_4 = -437814880;
long long int var_5 = 1022823304319142079LL;
int zero = 0;
signed char var_15 = (signed char)-116;
unsigned long long int var_16 = 905115972787965159ULL;
unsigned char var_17 = (unsigned char)42;
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
