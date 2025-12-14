#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 15687395000850068193ULL;
long long int var_6 = -7603171029267469295LL;
unsigned int var_7 = 1069001149U;
unsigned long long int var_10 = 2927306242184438924ULL;
int var_11 = 44080453;
int zero = 0;
unsigned long long int var_16 = 12703497680290337116ULL;
unsigned long long int var_17 = 16815360766760883653ULL;
void init() {
}

void checksum() {
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
