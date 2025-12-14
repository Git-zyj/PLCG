#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 105826091U;
unsigned int var_2 = 2775096923U;
unsigned long long int var_3 = 3644461654613307ULL;
long long int var_11 = 6370219856952444551LL;
long long int var_12 = -3014356267347659381LL;
int var_13 = -1661930543;
unsigned int var_14 = 1617500780U;
unsigned char var_19 = (unsigned char)34;
int zero = 0;
int var_20 = 2117302765;
unsigned int var_21 = 4105154935U;
long long int var_22 = 296398617942724865LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
