#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 13156515404737339857ULL;
unsigned int var_9 = 3764703983U;
signed char var_10 = (signed char)67;
int zero = 0;
unsigned int var_13 = 2045401303U;
signed char var_14 = (signed char)89;
int var_15 = 1623280592;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
