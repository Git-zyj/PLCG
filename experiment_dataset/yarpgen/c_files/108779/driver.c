#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3251366398507263779LL;
unsigned int var_5 = 3089256467U;
short var_6 = (short)-17072;
unsigned int var_7 = 142357618U;
unsigned char var_9 = (unsigned char)79;
long long int var_10 = -117788084721638635LL;
short var_11 = (short)-11320;
int zero = 0;
unsigned long long int var_13 = 12301159549573092844ULL;
long long int var_14 = -6904630343528144187LL;
_Bool var_15 = (_Bool)0;
long long int var_16 = 1679775995791687117LL;
int var_17 = -2063589791;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
