#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)94;
short var_1 = (short)27025;
short var_2 = (short)27228;
int var_3 = 597679415;
_Bool var_8 = (_Bool)1;
int var_10 = -1405232667;
long long int var_11 = 5320740887173986558LL;
unsigned char var_14 = (unsigned char)72;
long long int var_16 = 4816625944532616466LL;
int zero = 0;
unsigned int var_18 = 3421893745U;
short var_19 = (short)1908;
unsigned int var_20 = 2311646986U;
unsigned short var_21 = (unsigned short)62719;
void init() {
}

void checksum() {
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
