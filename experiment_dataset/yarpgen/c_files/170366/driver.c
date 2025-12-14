#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)224;
unsigned int var_6 = 1201383041U;
unsigned long long int var_7 = 18424021768689850680ULL;
unsigned long long int var_11 = 14728930686033677558ULL;
unsigned long long int var_15 = 5192751172188528766ULL;
int zero = 0;
unsigned int var_16 = 3865301905U;
unsigned char var_17 = (unsigned char)153;
unsigned char var_18 = (unsigned char)180;
long long int var_19 = 1555980438593124552LL;
signed char var_20 = (signed char)-42;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
