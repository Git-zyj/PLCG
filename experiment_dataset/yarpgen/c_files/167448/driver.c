#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 3138891917U;
int var_10 = -720178641;
int zero = 0;
unsigned long long int var_15 = 17418486973358476690ULL;
unsigned long long int var_16 = 15697421622307336310ULL;
int var_17 = -2059195454;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
