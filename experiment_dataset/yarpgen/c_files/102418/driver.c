#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 12103133997130802805ULL;
int var_11 = 827504474;
int var_17 = -54925072;
unsigned long long int var_18 = 1923415165433999944ULL;
int zero = 0;
signed char var_19 = (signed char)22;
long long int var_20 = -2201788865479794320LL;
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
