#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -6418794672272720860LL;
unsigned long long int var_8 = 12084279920705153321ULL;
unsigned int var_9 = 2191895949U;
int zero = 0;
unsigned long long int var_14 = 12087901776730950122ULL;
unsigned char var_15 = (unsigned char)106;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
