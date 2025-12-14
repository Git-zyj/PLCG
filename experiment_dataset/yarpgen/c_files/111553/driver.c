#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)178;
short var_2 = (short)-22183;
unsigned long long int var_3 = 5029179678465848200ULL;
_Bool var_8 = (_Bool)0;
long long int var_9 = -7702841221784331636LL;
short var_12 = (short)11129;
int zero = 0;
short var_13 = (short)-16108;
long long int var_14 = -1031443449178454670LL;
unsigned short var_15 = (unsigned short)54273;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
