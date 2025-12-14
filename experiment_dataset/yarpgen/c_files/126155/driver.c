#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)28214;
short var_6 = (short)-23416;
short var_7 = (short)-7664;
unsigned short var_9 = (unsigned short)55415;
int zero = 0;
unsigned short var_14 = (unsigned short)54242;
long long int var_15 = -8042261004850379588LL;
long long int var_16 = -6051036012093290332LL;
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
