#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
int var_5 = 561820464;
unsigned char var_8 = (unsigned char)12;
int var_10 = -403752942;
signed char var_15 = (signed char)-28;
unsigned long long int var_17 = 2286572078391834400ULL;
long long int var_18 = 7095737513277612552LL;
int zero = 0;
unsigned int var_19 = 811436056U;
unsigned long long int var_20 = 2861640999335119404ULL;
void init() {
}

void checksum() {
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
