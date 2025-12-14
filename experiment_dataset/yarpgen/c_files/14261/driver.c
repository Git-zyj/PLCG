#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)254;
short var_3 = (short)-32265;
unsigned long long int var_4 = 13470465726519549035ULL;
unsigned long long int var_7 = 9551411279848162902ULL;
short var_8 = (short)-19061;
long long int var_9 = -6708930899606296873LL;
int zero = 0;
short var_12 = (short)-13601;
long long int var_13 = -4620639625768341670LL;
unsigned int var_14 = 653537449U;
unsigned short var_15 = (unsigned short)19423;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
