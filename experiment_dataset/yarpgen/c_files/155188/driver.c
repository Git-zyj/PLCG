#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 2027069828;
long long int var_4 = -486536510195875584LL;
signed char var_5 = (signed char)-83;
unsigned long long int var_7 = 9977849214616078416ULL;
unsigned short var_8 = (unsigned short)1391;
int zero = 0;
int var_12 = 1500328184;
unsigned char var_13 = (unsigned char)244;
unsigned short var_14 = (unsigned short)2335;
unsigned char var_15 = (unsigned char)113;
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
