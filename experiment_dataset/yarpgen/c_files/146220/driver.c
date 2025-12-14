#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 274359814477828714LL;
unsigned char var_3 = (unsigned char)156;
int var_8 = -2146084407;
int zero = 0;
unsigned long long int var_15 = 13371315504841004700ULL;
long long int var_16 = 3855976402371119285LL;
signed char var_17 = (signed char)-36;
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
