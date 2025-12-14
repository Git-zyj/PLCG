#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3464784513U;
unsigned int var_2 = 3782904931U;
long long int var_3 = 8445801505821848068LL;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 17820905191787865874ULL;
signed char var_9 = (signed char)108;
int zero = 0;
signed char var_12 = (signed char)91;
unsigned char var_13 = (unsigned char)213;
signed char var_14 = (signed char)87;
unsigned long long int var_15 = 1394410291235447783ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
