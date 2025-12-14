#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_10 = 10809406333120778757ULL;
unsigned char var_12 = (unsigned char)34;
int zero = 0;
long long int var_14 = -7645702235294314926LL;
unsigned long long int var_15 = 8140943434016740193ULL;
short var_16 = (short)15876;
unsigned char var_17 = (unsigned char)225;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
