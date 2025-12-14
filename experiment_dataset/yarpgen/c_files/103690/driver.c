#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)106;
long long int var_12 = 4032723435835882098LL;
int zero = 0;
unsigned long long int var_19 = 1647124234433858421ULL;
unsigned long long int var_20 = 13027954174427329705ULL;
unsigned int var_21 = 2898020662U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
