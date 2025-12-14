#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8971724909646246589LL;
unsigned char var_7 = (unsigned char)215;
int zero = 0;
unsigned short var_13 = (unsigned short)2490;
short var_14 = (short)-14760;
unsigned long long int var_15 = 11469446042772869144ULL;
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
