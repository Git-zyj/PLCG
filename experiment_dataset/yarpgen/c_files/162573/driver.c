#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)39;
int var_3 = -877075586;
signed char var_4 = (signed char)118;
signed char var_5 = (signed char)-115;
unsigned int var_6 = 1601086772U;
long long int var_7 = -924084384445255540LL;
long long int var_9 = -5177743608609870006LL;
int zero = 0;
long long int var_11 = -5282166475431169932LL;
int var_12 = 956688769;
long long int var_13 = -5409904346058518299LL;
long long int var_14 = -8794502722515189314LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
