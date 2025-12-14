#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)244;
short var_1 = (short)16403;
_Bool var_5 = (_Bool)0;
unsigned short var_7 = (unsigned short)60324;
unsigned char var_8 = (unsigned char)194;
unsigned long long int var_11 = 1976204612132031571ULL;
int zero = 0;
int var_16 = -25613746;
unsigned short var_17 = (unsigned short)59768;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
