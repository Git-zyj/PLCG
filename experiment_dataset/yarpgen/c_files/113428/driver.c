#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = 638304832922365093LL;
int var_11 = 466109791;
int var_15 = 3041571;
int zero = 0;
long long int var_17 = -8538608159657322554LL;
unsigned char var_18 = (unsigned char)254;
long long int var_19 = -6060500269897596343LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
