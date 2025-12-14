#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -1930859263494965599LL;
long long int var_15 = 5079630907843080799LL;
int zero = 0;
unsigned long long int var_20 = 18268463024613836597ULL;
long long int var_21 = -6324706424018186733LL;
unsigned long long int var_22 = 13827469823895397934ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
