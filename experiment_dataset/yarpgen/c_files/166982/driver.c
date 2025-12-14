#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)22;
unsigned long long int var_4 = 13109892488540798608ULL;
long long int var_6 = -5493719982279241844LL;
int zero = 0;
long long int var_11 = 4863446577698692617LL;
int var_12 = -1786378952;
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
