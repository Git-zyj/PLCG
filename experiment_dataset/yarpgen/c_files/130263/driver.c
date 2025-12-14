#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2305788488U;
unsigned int var_6 = 3626799364U;
unsigned int var_9 = 518194530U;
int zero = 0;
unsigned long long int var_10 = 2788724618967118276ULL;
unsigned int var_11 = 50234921U;
unsigned long long int var_12 = 8360443691680070599ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
