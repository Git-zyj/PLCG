#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)20476;
unsigned int var_3 = 2262861243U;
unsigned int var_10 = 363368140U;
signed char var_14 = (signed char)94;
unsigned int var_18 = 628464922U;
int zero = 0;
unsigned int var_19 = 695509897U;
long long int var_20 = 3861376493644208112LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
