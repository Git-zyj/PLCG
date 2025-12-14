#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4034887625855120850ULL;
unsigned int var_9 = 1541469767U;
short var_10 = (short)-24888;
int var_12 = -731611436;
_Bool var_14 = (_Bool)1;
int zero = 0;
int var_16 = 922983029;
unsigned long long int var_17 = 15566594771006381154ULL;
unsigned long long int var_18 = 17819426884644130922ULL;
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
