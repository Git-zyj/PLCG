#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1861509924383337663LL;
long long int var_1 = -3333426215064451275LL;
unsigned char var_3 = (unsigned char)247;
unsigned long long int var_5 = 1338691870241816323ULL;
long long int var_6 = 3867991663435468167LL;
unsigned int var_7 = 4014008773U;
signed char var_9 = (signed char)-22;
long long int var_11 = 738401389592306530LL;
int zero = 0;
unsigned char var_13 = (unsigned char)208;
unsigned int var_14 = 488546659U;
int var_15 = 1753567593;
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
