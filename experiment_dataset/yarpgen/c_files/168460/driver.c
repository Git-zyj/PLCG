#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)52022;
unsigned short var_6 = (unsigned short)54826;
long long int var_8 = 3777595787351094609LL;
unsigned long long int var_15 = 1892615473850755192ULL;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 1071212986776498568ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
