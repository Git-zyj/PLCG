#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)19190;
short var_1 = (short)-2372;
short var_3 = (short)28389;
unsigned short var_7 = (unsigned short)59157;
short var_8 = (short)2800;
unsigned short var_9 = (unsigned short)10642;
unsigned short var_11 = (unsigned short)62003;
short var_14 = (short)-5911;
int zero = 0;
unsigned short var_15 = (unsigned short)59659;
unsigned short var_16 = (unsigned short)47047;
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
