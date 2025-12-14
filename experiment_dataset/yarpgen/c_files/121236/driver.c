#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_10 = 15433296490736431405ULL;
unsigned long long int var_11 = 8051778073764044591ULL;
int zero = 0;
unsigned long long int var_20 = 8550352901443400266ULL;
unsigned long long int var_21 = 9420404553227485827ULL;
void init() {
}

void checksum() {
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
