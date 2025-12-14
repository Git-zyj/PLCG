#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)34;
unsigned short var_3 = (unsigned short)54236;
unsigned char var_5 = (unsigned char)91;
int var_7 = 779913749;
short var_9 = (short)18216;
unsigned short var_12 = (unsigned short)20243;
_Bool var_13 = (_Bool)1;
unsigned short var_15 = (unsigned short)16150;
int zero = 0;
short var_18 = (short)2758;
int var_19 = 1542125022;
unsigned short var_20 = (unsigned short)30481;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
