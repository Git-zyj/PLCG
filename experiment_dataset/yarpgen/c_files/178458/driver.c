#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7390447339647326365LL;
int var_3 = 1193205813;
unsigned int var_4 = 204327576U;
unsigned long long int var_6 = 10284645645623732833ULL;
int zero = 0;
long long int var_14 = -3481622266058128753LL;
long long int var_15 = -8785462525741385480LL;
void init() {
}

void checksum() {
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
