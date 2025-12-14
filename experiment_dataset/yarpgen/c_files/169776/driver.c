#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1883356842;
unsigned long long int var_6 = 5652007779434167202ULL;
long long int var_8 = 5696608844544067194LL;
int zero = 0;
long long int var_11 = -7772680549096307680LL;
unsigned long long int var_12 = 11705367039063047097ULL;
int var_13 = -1681646757;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
