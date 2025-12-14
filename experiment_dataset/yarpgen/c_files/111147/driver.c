#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-74;
unsigned long long int var_9 = 3852113995334780277ULL;
unsigned long long int var_14 = 5931502890958688700ULL;
int zero = 0;
long long int var_17 = -2509474892307059228LL;
unsigned int var_18 = 1117530054U;
int var_19 = -80896753;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
