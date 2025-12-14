#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)14390;
_Bool var_6 = (_Bool)0;
unsigned long long int var_8 = 8520871532104668547ULL;
long long int var_12 = -7146139722556610909LL;
int var_15 = 625308358;
unsigned long long int var_17 = 6765671903563511156ULL;
int zero = 0;
unsigned long long int var_20 = 7960880548434806870ULL;
int var_21 = -763613186;
short var_22 = (short)20928;
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
