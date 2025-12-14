#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2475465571342001156LL;
unsigned char var_4 = (unsigned char)3;
unsigned long long int var_5 = 2486904494689109516ULL;
unsigned short var_7 = (unsigned short)22713;
unsigned char var_8 = (unsigned char)110;
long long int var_9 = 153980297777981315LL;
unsigned char var_10 = (unsigned char)182;
int var_11 = 620399479;
long long int var_13 = -6395693994692335679LL;
int zero = 0;
long long int var_14 = -7951737472433321334LL;
unsigned short var_15 = (unsigned short)39440;
unsigned long long int var_16 = 12916821708897097580ULL;
unsigned long long int var_17 = 5027390498138691174ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
