#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)15907;
long long int var_10 = 1890826525120043594LL;
int zero = 0;
unsigned short var_17 = (unsigned short)29684;
unsigned long long int var_18 = 17316956922180615237ULL;
long long int var_19 = 2551348466865203999LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
