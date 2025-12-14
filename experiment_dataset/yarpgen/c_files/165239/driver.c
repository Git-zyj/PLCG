#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 449008347;
_Bool var_5 = (_Bool)0;
int var_6 = 356650652;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 17424307849758638477ULL;
unsigned char var_13 = (unsigned char)178;
int zero = 0;
_Bool var_15 = (_Bool)0;
int var_16 = -1807845781;
void init() {
}

void checksum() {
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
