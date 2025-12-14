#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 7587868976536901515ULL;
int var_5 = 1533982436;
int var_8 = -170494998;
int zero = 0;
unsigned char var_10 = (unsigned char)147;
unsigned short var_11 = (unsigned short)34317;
unsigned char var_12 = (unsigned char)209;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
