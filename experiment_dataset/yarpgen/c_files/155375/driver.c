#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -5661932088145956072LL;
long long int var_7 = 9201131220005287050LL;
unsigned char var_8 = (unsigned char)122;
unsigned short var_9 = (unsigned short)57283;
unsigned long long int var_11 = 10035521382755619304ULL;
unsigned short var_12 = (unsigned short)38320;
int zero = 0;
unsigned int var_15 = 3311392307U;
unsigned char var_16 = (unsigned char)50;
int var_17 = -2073472074;
long long int var_18 = 1938747706115415012LL;
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
