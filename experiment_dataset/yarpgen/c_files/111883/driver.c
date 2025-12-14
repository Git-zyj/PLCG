#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)7922;
unsigned short var_5 = (unsigned short)7501;
unsigned short var_6 = (unsigned short)30040;
unsigned short var_8 = (unsigned short)38652;
unsigned short var_9 = (unsigned short)11138;
unsigned short var_10 = (unsigned short)49232;
unsigned short var_12 = (unsigned short)31702;
unsigned short var_15 = (unsigned short)42390;
unsigned short var_17 = (unsigned short)40953;
unsigned short var_18 = (unsigned short)4401;
int zero = 0;
unsigned short var_19 = (unsigned short)58020;
unsigned short var_20 = (unsigned short)3790;
unsigned short var_21 = (unsigned short)46705;
unsigned short var_22 = (unsigned short)63658;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
