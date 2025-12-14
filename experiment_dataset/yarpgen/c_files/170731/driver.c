#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 8091518049428055859ULL;
unsigned char var_8 = (unsigned char)29;
long long int var_9 = -3569328252696305487LL;
unsigned long long int var_11 = 13486776453302703392ULL;
signed char var_12 = (signed char)-65;
int zero = 0;
unsigned char var_13 = (unsigned char)184;
unsigned char var_14 = (unsigned char)230;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
