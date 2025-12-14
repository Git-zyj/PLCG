#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1034242837U;
unsigned long long int var_6 = 9786686945436871630ULL;
int var_8 = 1835293394;
unsigned long long int var_12 = 10794486179162461531ULL;
int zero = 0;
unsigned int var_20 = 629833458U;
unsigned int var_21 = 2034062991U;
unsigned long long int var_22 = 11882075760942242394ULL;
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
