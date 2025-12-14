#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 3079057026U;
int var_6 = 1267427666;
unsigned long long int var_8 = 7786647751641966992ULL;
unsigned int var_9 = 4047212264U;
unsigned int var_10 = 389045108U;
int zero = 0;
unsigned short var_14 = (unsigned short)38790;
unsigned long long int var_15 = 7217368988624293812ULL;
long long int var_16 = 9121482874483898530LL;
unsigned int var_17 = 2703057167U;
unsigned long long int var_18 = 14334832150356117001ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
