#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)24817;
unsigned long long int var_5 = 13102771413272280622ULL;
long long int var_12 = -6805437721943197656LL;
int zero = 0;
unsigned int var_13 = 2255065364U;
int var_14 = 1660273018;
unsigned long long int var_15 = 8421897321073984823ULL;
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
