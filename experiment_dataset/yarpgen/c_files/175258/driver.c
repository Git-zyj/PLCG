#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8664865699243832117LL;
signed char var_3 = (signed char)26;
int var_5 = -838492970;
long long int var_7 = 990723079455528507LL;
int zero = 0;
unsigned char var_14 = (unsigned char)221;
int var_15 = -514978868;
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
