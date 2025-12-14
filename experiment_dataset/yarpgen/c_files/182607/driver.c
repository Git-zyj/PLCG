#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)178;
unsigned long long int var_5 = 9549913732940777011ULL;
unsigned long long int var_10 = 12059417048118447611ULL;
long long int var_12 = -221391575621155851LL;
unsigned long long int var_13 = 6114265304473757676ULL;
signed char var_16 = (signed char)44;
int zero = 0;
unsigned int var_18 = 1953466081U;
short var_19 = (short)20360;
void init() {
}

void checksum() {
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
