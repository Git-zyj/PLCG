#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)50;
unsigned int var_3 = 3139468794U;
unsigned long long int var_4 = 15668206172071792737ULL;
unsigned int var_7 = 1124231763U;
long long int var_8 = 9189998625370087050LL;
long long int var_9 = -3528065697151340958LL;
int zero = 0;
int var_10 = -1829520557;
long long int var_11 = -2727448500157858578LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
