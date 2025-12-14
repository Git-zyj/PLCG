#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 4548206395020889971LL;
unsigned int var_7 = 2063724491U;
unsigned char var_8 = (unsigned char)147;
_Bool var_10 = (_Bool)1;
unsigned char var_15 = (unsigned char)108;
unsigned char var_16 = (unsigned char)7;
int zero = 0;
int var_20 = 2031686837;
int var_21 = 705738427;
_Bool var_22 = (_Bool)0;
_Bool var_23 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
