#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15858956048488548589ULL;
long long int var_7 = 1800844332486460134LL;
unsigned int var_11 = 36171607U;
int zero = 0;
signed char var_18 = (signed char)101;
long long int var_19 = 5159518601288215813LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
