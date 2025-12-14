#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 117148270;
long long int var_1 = 2540486020759103490LL;
int var_8 = -1351416874;
unsigned long long int var_9 = 7706745811396159472ULL;
int var_11 = -933194965;
int zero = 0;
short var_12 = (short)-7541;
signed char var_13 = (signed char)39;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
