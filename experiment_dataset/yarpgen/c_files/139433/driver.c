#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned char var_5 = (unsigned char)242;
unsigned short var_7 = (unsigned short)12578;
short var_11 = (short)24995;
short var_15 = (short)28212;
unsigned int var_17 = 970437507U;
int zero = 0;
long long int var_18 = -4571176268456184213LL;
long long int var_19 = 8524015940481460461LL;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
