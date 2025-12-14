#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)29293;
long long int var_3 = 7882832017742738238LL;
unsigned char var_6 = (unsigned char)52;
unsigned char var_7 = (unsigned char)110;
unsigned int var_12 = 888878405U;
unsigned int var_15 = 4007808341U;
_Bool var_16 = (_Bool)0;
int zero = 0;
_Bool var_17 = (_Bool)1;
long long int var_18 = 4783002096177986068LL;
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
