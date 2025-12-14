#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 912016999U;
int var_1 = 754200380;
unsigned long long int var_2 = 16061786818895426124ULL;
unsigned int var_3 = 674539083U;
unsigned int var_5 = 1606130705U;
int var_8 = -823093850;
unsigned char var_11 = (unsigned char)118;
unsigned char var_12 = (unsigned char)170;
int zero = 0;
unsigned int var_15 = 757946256U;
int var_16 = 583330457;
unsigned int var_17 = 3715919212U;
short var_18 = (short)12676;
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
