#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)232;
unsigned long long int var_2 = 16196913770058287775ULL;
_Bool var_6 = (_Bool)0;
long long int var_10 = 745858312132608305LL;
unsigned long long int var_11 = 10775216730337669067ULL;
int var_17 = 1742514014;
signed char var_18 = (signed char)8;
int zero = 0;
unsigned short var_19 = (unsigned short)52009;
short var_20 = (short)25041;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
