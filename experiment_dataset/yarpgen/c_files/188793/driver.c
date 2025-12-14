#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned long long int var_8 = 16307517619179606441ULL;
unsigned short var_15 = (unsigned short)18101;
unsigned short var_17 = (unsigned short)34887;
unsigned char var_18 = (unsigned char)141;
int zero = 0;
short var_19 = (short)-32712;
unsigned int var_20 = 3620360081U;
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
