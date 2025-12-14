#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 872341962936134985LL;
unsigned long long int var_3 = 12453760540977340965ULL;
signed char var_4 = (signed char)-106;
unsigned long long int var_7 = 8974530331060836736ULL;
long long int var_10 = 8795922358848296638LL;
unsigned long long int var_12 = 18434750033498169705ULL;
int zero = 0;
unsigned int var_20 = 2831381633U;
unsigned long long int var_21 = 7571743909253858926ULL;
void init() {
}

void checksum() {
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
