#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1871192605;
long long int var_16 = 3143141822766305420LL;
long long int var_17 = -4359105370656802935LL;
unsigned char var_18 = (unsigned char)146;
int zero = 0;
long long int var_19 = 2564683259417763356LL;
long long int var_20 = 1591830388625748029LL;
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
