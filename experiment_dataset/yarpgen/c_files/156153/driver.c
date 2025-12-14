#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)1566;
short var_6 = (short)10849;
unsigned int var_9 = 246986574U;
unsigned int var_14 = 2265168673U;
unsigned char var_15 = (unsigned char)130;
unsigned short var_16 = (unsigned short)42088;
int zero = 0;
unsigned long long int var_17 = 7507459617713024356ULL;
unsigned short var_18 = (unsigned short)9620;
int var_19 = -1173103451;
unsigned short var_20 = (unsigned short)10218;
unsigned int var_21 = 1013479124U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
