#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3582983100778253397LL;
unsigned long long int var_5 = 4365513815139999194ULL;
unsigned char var_8 = (unsigned char)34;
int zero = 0;
unsigned short var_10 = (unsigned short)21923;
_Bool var_11 = (_Bool)0;
short var_12 = (short)8174;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
