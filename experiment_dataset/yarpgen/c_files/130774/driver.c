#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)35263;
long long int var_1 = 3333248475031002758LL;
long long int var_2 = -5467755891562043591LL;
unsigned short var_3 = (unsigned short)20140;
unsigned long long int var_9 = 11274207119624165504ULL;
signed char var_10 = (signed char)-56;
int zero = 0;
short var_12 = (short)-20260;
unsigned short var_13 = (unsigned short)43412;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
