#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4636556956878746772LL;
unsigned long long int var_5 = 5424876605226297955ULL;
unsigned long long int var_6 = 2084333273413495615ULL;
int zero = 0;
int var_11 = -689028257;
unsigned long long int var_12 = 3254973382227936755ULL;
unsigned long long int var_13 = 3517960381373526412ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
