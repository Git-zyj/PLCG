#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-30511;
_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)103;
short var_8 = (short)23862;
short var_10 = (short)11468;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned int var_13 = 2182360885U;
unsigned int var_14 = 2057706671U;
unsigned int var_15 = 1939996150U;
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
