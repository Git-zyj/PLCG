#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5686586953755419924LL;
unsigned char var_5 = (unsigned char)163;
unsigned char var_12 = (unsigned char)53;
int zero = 0;
unsigned char var_17 = (unsigned char)187;
unsigned char var_18 = (unsigned char)25;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
