#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2469113914U;
unsigned int var_7 = 3742480435U;
unsigned int var_8 = 2532500404U;
int zero = 0;
long long int var_13 = 7637749759655625326LL;
unsigned char var_14 = (unsigned char)121;
void init() {
}

void checksum() {
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
