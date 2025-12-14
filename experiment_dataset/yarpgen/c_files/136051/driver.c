#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)4205;
unsigned int var_9 = 789991722U;
long long int var_11 = 1161347002274624184LL;
unsigned short var_14 = (unsigned short)35978;
int zero = 0;
int var_15 = -926646683;
unsigned long long int var_16 = 2861088873843953848ULL;
void init() {
}

void checksum() {
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
