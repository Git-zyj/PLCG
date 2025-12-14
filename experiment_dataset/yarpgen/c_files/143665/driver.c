#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 306613669;
unsigned long long int var_16 = 4574154804143306424ULL;
int zero = 0;
unsigned long long int var_18 = 8480356534825862524ULL;
unsigned short var_19 = (unsigned short)27075;
long long int var_20 = 6250773294174652631LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
