#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 1931577386464774143ULL;
unsigned long long int var_13 = 4873188808735893187ULL;
int zero = 0;
unsigned long long int var_15 = 11138840268561727575ULL;
long long int var_16 = 3448834658286991607LL;
unsigned long long int var_17 = 16948637253924196654ULL;
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
