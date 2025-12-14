#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7746648076333739256LL;
unsigned char var_7 = (unsigned char)217;
unsigned int var_10 = 811561385U;
int zero = 0;
int var_16 = -421829232;
long long int var_17 = 6980205321792509269LL;
int var_18 = 1313635684;
void init() {
}

void checksum() {
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
