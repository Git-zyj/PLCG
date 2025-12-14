#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5671151401707857704LL;
short var_2 = (short)-30849;
unsigned int var_3 = 851072003U;
int var_8 = -1282390687;
short var_9 = (short)26947;
short var_10 = (short)14142;
int zero = 0;
unsigned long long int var_12 = 17628421106239166177ULL;
signed char var_13 = (signed char)87;
void init() {
}

void checksum() {
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
