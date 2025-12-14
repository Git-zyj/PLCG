#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 12134743797066616946ULL;
signed char var_4 = (signed char)93;
long long int var_8 = -1355895375784492193LL;
unsigned int var_10 = 325640806U;
long long int var_16 = 1841021700088890678LL;
int zero = 0;
signed char var_19 = (signed char)16;
unsigned int var_20 = 1909941737U;
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
