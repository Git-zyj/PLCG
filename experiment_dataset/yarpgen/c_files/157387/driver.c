#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3582897453288847159LL;
unsigned long long int var_11 = 18092378555285307726ULL;
int zero = 0;
unsigned long long int var_15 = 351754526960323234ULL;
unsigned long long int var_16 = 9794010353000590272ULL;
unsigned long long int var_17 = 5429686866544323819ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
