#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_11 = -3360515850460717853LL;
int var_15 = -1378959390;
unsigned short var_16 = (unsigned short)21175;
int zero = 0;
unsigned char var_18 = (unsigned char)137;
short var_19 = (short)7673;
void init() {
}

void checksum() {
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
