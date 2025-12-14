#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1030664843346213633LL;
int var_11 = -997242059;
unsigned long long int var_13 = 6164517881848690598ULL;
int var_14 = 1730995440;
int zero = 0;
signed char var_15 = (signed char)-6;
int var_16 = 762055632;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
