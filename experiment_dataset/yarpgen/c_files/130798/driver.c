#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -3067868820971037094LL;
_Bool var_3 = (_Bool)0;
unsigned short var_8 = (unsigned short)24889;
short var_10 = (short)-13410;
int zero = 0;
unsigned char var_11 = (unsigned char)87;
unsigned short var_12 = (unsigned short)659;
void init() {
}

void checksum() {
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
