#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 66058025;
signed char var_6 = (signed char)35;
long long int var_10 = -2399037321527137366LL;
signed char var_11 = (signed char)107;
int zero = 0;
unsigned long long int var_19 = 7342898547660763031ULL;
unsigned char var_20 = (unsigned char)185;
unsigned char var_21 = (unsigned char)9;
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
