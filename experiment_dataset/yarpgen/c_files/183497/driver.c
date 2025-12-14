#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)8030;
unsigned int var_2 = 786176568U;
signed char var_3 = (signed char)11;
long long int var_8 = 3614271084864945090LL;
_Bool var_9 = (_Bool)1;
long long int var_10 = 8168189959992223405LL;
unsigned short var_13 = (unsigned short)64310;
unsigned int var_14 = 3895047799U;
int zero = 0;
unsigned short var_19 = (unsigned short)47258;
unsigned int var_20 = 129969120U;
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
