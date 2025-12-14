#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7695929784958804532LL;
short var_2 = (short)-22911;
unsigned int var_4 = 1519974219U;
signed char var_7 = (signed char)-81;
long long int var_10 = -3362639643836773566LL;
short var_12 = (short)3487;
int zero = 0;
_Bool var_13 = (_Bool)1;
int var_14 = -1504311003;
unsigned int var_15 = 1569341058U;
short var_16 = (short)-23731;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
