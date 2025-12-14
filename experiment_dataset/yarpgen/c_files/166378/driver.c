#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5836903185906562746ULL;
int var_2 = 417425917;
long long int var_9 = 6463490204076600825LL;
short var_10 = (short)5497;
unsigned int var_12 = 2109937770U;
unsigned int var_13 = 2420412859U;
int zero = 0;
int var_15 = -1899439809;
unsigned long long int var_16 = 8385054241779832968ULL;
unsigned short var_17 = (unsigned short)51421;
int var_18 = -1134875826;
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
