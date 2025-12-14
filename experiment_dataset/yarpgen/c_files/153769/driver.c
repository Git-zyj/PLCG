#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_10 = 3308899932668029075LL;
int var_11 = 1795779926;
short var_13 = (short)-786;
int zero = 0;
unsigned char var_15 = (unsigned char)88;
unsigned long long int var_16 = 15594856721337485622ULL;
int var_17 = 237035684;
long long int var_18 = -8844286543312479708LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
