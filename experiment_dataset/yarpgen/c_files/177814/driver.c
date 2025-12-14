#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)44;
unsigned short var_1 = (unsigned short)42281;
short var_4 = (short)-17349;
long long int var_5 = 7418821760589282765LL;
unsigned long long int var_7 = 17717424440018129270ULL;
unsigned int var_8 = 3534529089U;
unsigned short var_9 = (unsigned short)47165;
int var_13 = -728287489;
int zero = 0;
unsigned char var_14 = (unsigned char)166;
unsigned int var_15 = 1385052657U;
short var_16 = (short)-24405;
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
