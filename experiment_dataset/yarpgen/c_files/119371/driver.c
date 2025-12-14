#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_1 = (unsigned char)249;
unsigned char var_3 = (unsigned char)233;
unsigned long long int var_7 = 8269813253579729217ULL;
int var_8 = 1783767600;
_Bool var_9 = (_Bool)1;
short var_11 = (short)-6244;
unsigned char var_13 = (unsigned char)198;
int zero = 0;
unsigned long long int var_17 = 8332187882237085464ULL;
unsigned long long int var_18 = 7039726401333927310ULL;
void init() {
}

void checksum() {
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
