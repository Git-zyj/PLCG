#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3241853939457835457LL;
unsigned short var_4 = (unsigned short)33534;
unsigned short var_8 = (unsigned short)15891;
_Bool var_10 = (_Bool)0;
int var_11 = -46886607;
int zero = 0;
unsigned short var_14 = (unsigned short)52215;
unsigned short var_15 = (unsigned short)40700;
long long int var_16 = 2743647384587858924LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
