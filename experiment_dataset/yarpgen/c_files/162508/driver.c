#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -5399810860379629933LL;
unsigned int var_5 = 399878267U;
long long int var_7 = 8566846413293846549LL;
unsigned long long int var_8 = 4464944744777201108ULL;
unsigned int var_15 = 1578008938U;
int zero = 0;
unsigned int var_16 = 2929681588U;
long long int var_17 = 7246231332807503918LL;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 14565399487190958935ULL;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
