#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 15070982890107161761ULL;
long long int var_11 = -52231585152339032LL;
int zero = 0;
unsigned char var_12 = (unsigned char)239;
long long int var_13 = 4879643919912413181LL;
signed char var_14 = (signed char)-116;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
