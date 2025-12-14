#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7707714554174691506LL;
int var_3 = 1759422316;
_Bool var_5 = (_Bool)1;
int var_8 = -981455685;
unsigned int var_10 = 4272089915U;
unsigned short var_12 = (unsigned short)37486;
int zero = 0;
signed char var_13 = (signed char)-119;
signed char var_14 = (signed char)113;
signed char var_15 = (signed char)34;
void init() {
}

void checksum() {
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
