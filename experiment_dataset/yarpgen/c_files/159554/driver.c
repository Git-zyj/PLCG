#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)63;
signed char var_5 = (signed char)88;
signed char var_7 = (signed char)90;
signed char var_10 = (signed char)6;
int zero = 0;
int var_12 = -974973487;
long long int var_13 = -6630465905797401142LL;
long long int var_14 = -8613286595679373927LL;
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
