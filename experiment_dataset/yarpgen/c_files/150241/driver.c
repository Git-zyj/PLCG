#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3466106039170781781LL;
signed char var_4 = (signed char)109;
int var_5 = -1125184157;
unsigned int var_6 = 3053413631U;
int zero = 0;
signed char var_10 = (signed char)83;
unsigned long long int var_11 = 2262296295228996998ULL;
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
