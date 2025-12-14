#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15123130013680103987ULL;
long long int var_2 = 365078862723076265LL;
int var_7 = -1869863562;
int zero = 0;
unsigned long long int var_11 = 4747311440312883082ULL;
long long int var_12 = 3840085264242453963LL;
void init() {
}

void checksum() {
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
