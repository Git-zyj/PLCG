#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3574066145U;
long long int var_4 = 5550266411140712297LL;
unsigned int var_6 = 1241988897U;
unsigned long long int var_8 = 4995499907751524638ULL;
unsigned long long int var_9 = 3473994424511468785ULL;
int var_11 = -852947969;
long long int var_14 = 3737318393723976253LL;
unsigned int var_15 = 2208194602U;
int zero = 0;
signed char var_18 = (signed char)3;
long long int var_19 = -3823820770654493248LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
