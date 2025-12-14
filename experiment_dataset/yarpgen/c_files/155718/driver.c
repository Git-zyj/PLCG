#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)10156;
unsigned short var_2 = (unsigned short)26064;
unsigned long long int var_4 = 6746846817987239702ULL;
unsigned short var_5 = (unsigned short)40511;
unsigned short var_6 = (unsigned short)26338;
unsigned short var_8 = (unsigned short)40609;
unsigned short var_9 = (unsigned short)32439;
short var_14 = (short)-28456;
int zero = 0;
unsigned short var_15 = (unsigned short)10014;
unsigned int var_16 = 2155164716U;
short var_17 = (short)-14972;
unsigned short var_18 = (unsigned short)18334;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
