#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -2144595448;
long long int var_9 = 4183073305168518836LL;
int zero = 0;
unsigned long long int var_10 = 14533367297793261401ULL;
unsigned long long int var_11 = 5967994844074618456ULL;
signed char var_12 = (signed char)100;
long long int var_13 = 5474831746332136356LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
