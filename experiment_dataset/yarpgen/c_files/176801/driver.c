#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3316889654U;
unsigned int var_3 = 2263163993U;
long long int var_4 = -533584278147369618LL;
unsigned long long int var_8 = 13718238571676586629ULL;
int var_11 = 156693764;
short var_12 = (short)10056;
int zero = 0;
signed char var_15 = (signed char)-103;
unsigned long long int var_16 = 13930090027072355427ULL;
signed char var_17 = (signed char)-34;
long long int var_18 = 4126519498305589412LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
