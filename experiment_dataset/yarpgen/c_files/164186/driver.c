#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-9908;
unsigned long long int var_4 = 8893403544720976775ULL;
unsigned short var_11 = (unsigned short)1867;
unsigned long long int var_14 = 2007522021550464183ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)30142;
int var_16 = -376981842;
short var_17 = (short)25947;
unsigned long long int var_18 = 1668118855117327216ULL;
unsigned short var_19 = (unsigned short)59650;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
