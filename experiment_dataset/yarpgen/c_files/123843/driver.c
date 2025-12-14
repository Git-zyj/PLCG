#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12816521097618767208ULL;
int var_2 = -1956304171;
long long int var_4 = 4244587051184697548LL;
unsigned short var_7 = (unsigned short)9438;
signed char var_12 = (signed char)-40;
int zero = 0;
signed char var_14 = (signed char)53;
unsigned short var_15 = (unsigned short)6480;
signed char var_16 = (signed char)-94;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
