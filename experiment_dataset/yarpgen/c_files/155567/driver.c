#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)18581;
long long int var_1 = 8127946299375872496LL;
unsigned long long int var_3 = 13105699796981511846ULL;
unsigned short var_4 = (unsigned short)45120;
int var_7 = -332630442;
unsigned short var_8 = (unsigned short)29574;
short var_11 = (short)-4572;
_Bool var_12 = (_Bool)0;
long long int var_14 = -3791350587653448427LL;
int zero = 0;
long long int var_15 = -2658402717997770816LL;
unsigned char var_16 = (unsigned char)251;
void init() {
}

void checksum() {
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
