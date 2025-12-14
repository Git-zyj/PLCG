#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_9 = (signed char)-8;
long long int var_14 = 8404889658748224312LL;
signed char var_15 = (signed char)-105;
int var_17 = 731693096;
int zero = 0;
unsigned int var_18 = 1172223841U;
unsigned int var_19 = 1340150187U;
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
