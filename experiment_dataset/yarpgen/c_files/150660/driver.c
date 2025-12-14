#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)30183;
long long int var_7 = -1148439810815208051LL;
_Bool var_8 = (_Bool)1;
long long int var_10 = -5503371871438554718LL;
short var_13 = (short)-4547;
int zero = 0;
unsigned char var_14 = (unsigned char)141;
unsigned short var_15 = (unsigned short)52263;
void init() {
}

void checksum() {
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
