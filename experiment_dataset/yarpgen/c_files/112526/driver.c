#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 15113304120581696698ULL;
int var_4 = -1693253287;
long long int var_6 = -5256059177651178998LL;
unsigned long long int var_15 = 14728998047449791248ULL;
int zero = 0;
long long int var_16 = 8390307859993473012LL;
int var_17 = -791495831;
void init() {
}

void checksum() {
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
