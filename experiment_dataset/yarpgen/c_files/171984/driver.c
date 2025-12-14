#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -7207254789543330865LL;
int var_4 = 2020943310;
int var_6 = 503527455;
int zero = 0;
long long int var_20 = 497673353345872586LL;
unsigned int var_21 = 2879209348U;
unsigned int var_22 = 1423825816U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
