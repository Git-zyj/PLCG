#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-113;
unsigned int var_4 = 97366668U;
unsigned int var_5 = 2318937136U;
unsigned int var_10 = 3809710779U;
unsigned int var_12 = 496015630U;
unsigned int var_13 = 1070297454U;
int zero = 0;
unsigned int var_19 = 2145398471U;
unsigned long long int var_20 = 14994202634725735058ULL;
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
