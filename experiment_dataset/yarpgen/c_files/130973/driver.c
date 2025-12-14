#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)24697;
long long int var_3 = 8151813603731482435LL;
unsigned long long int var_5 = 11517597729078905825ULL;
unsigned long long int var_8 = 13307236869091360049ULL;
unsigned char var_16 = (unsigned char)188;
int zero = 0;
signed char var_17 = (signed char)115;
unsigned long long int var_18 = 10463302973158117520ULL;
unsigned char var_19 = (unsigned char)90;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
