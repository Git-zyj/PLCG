#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 6942401186324922651LL;
long long int var_4 = 7947147947538694728LL;
long long int var_5 = -2113728849075865056LL;
long long int var_7 = -3090205498225035541LL;
long long int var_9 = -2768906285316959494LL;
int zero = 0;
long long int var_15 = 4566073870851982125LL;
long long int var_16 = 1360219999223890808LL;
long long int var_17 = -5558666723896095258LL;
long long int var_18 = -602384502414876944LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
