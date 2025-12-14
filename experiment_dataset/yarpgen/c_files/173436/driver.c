#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -3873473285076737678LL;
signed char var_7 = (signed char)-93;
int var_15 = 905149542;
int zero = 0;
unsigned long long int var_20 = 6920431988642350597ULL;
unsigned short var_21 = (unsigned short)30715;
unsigned int var_22 = 2038702074U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
