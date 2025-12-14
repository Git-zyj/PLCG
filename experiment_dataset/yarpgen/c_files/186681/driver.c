#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3172805862688832865ULL;
unsigned long long int var_3 = 12093740592050966741ULL;
int var_4 = 1084215301;
signed char var_7 = (signed char)92;
unsigned long long int var_9 = 16885700145769503954ULL;
int zero = 0;
unsigned long long int var_12 = 15446722174022613371ULL;
long long int var_13 = 8404543096269377494LL;
unsigned long long int var_14 = 8099649590658134393ULL;
int var_15 = -2016981551;
int var_16 = 1528410511;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
