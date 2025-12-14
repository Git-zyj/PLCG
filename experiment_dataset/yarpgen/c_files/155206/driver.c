#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-84;
unsigned long long int var_5 = 9092588608655707933ULL;
unsigned char var_6 = (unsigned char)146;
int zero = 0;
int var_10 = -1731425409;
unsigned long long int var_11 = 15336653778256631163ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
