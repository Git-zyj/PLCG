#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 392746932U;
long long int var_3 = 6189468384628555642LL;
long long int var_6 = -7017567861847545860LL;
long long int var_10 = -8826342193469928832LL;
int var_11 = -2083851663;
int zero = 0;
long long int var_12 = 9188233423632318703LL;
long long int var_13 = 7611876507602034754LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
