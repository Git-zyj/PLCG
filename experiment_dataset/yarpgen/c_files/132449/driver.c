#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1944613808;
_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)-112;
unsigned int var_4 = 2731787889U;
int var_6 = -1083842544;
unsigned long long int var_7 = 10305715564428955518ULL;
unsigned long long int var_10 = 7225074413360974691ULL;
int zero = 0;
int var_12 = 2033417136;
long long int var_13 = 6260638719031681612LL;
unsigned int var_14 = 1702256445U;
signed char var_15 = (signed char)93;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
