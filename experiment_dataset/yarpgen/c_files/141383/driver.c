#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15385273759628241889ULL;
long long int var_10 = -2218003369104041799LL;
int zero = 0;
unsigned long long int var_12 = 5912426726777018747ULL;
short var_13 = (short)10690;
unsigned long long int var_14 = 7056222268067125689ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
