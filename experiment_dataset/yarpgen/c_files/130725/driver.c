#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-12583;
unsigned short var_3 = (unsigned short)38983;
_Bool var_4 = (_Bool)1;
short var_5 = (short)8387;
unsigned short var_7 = (unsigned short)14298;
short var_8 = (short)-20487;
unsigned short var_10 = (unsigned short)59765;
unsigned short var_11 = (unsigned short)31383;
unsigned short var_12 = (unsigned short)24889;
short var_15 = (short)20111;
short var_16 = (short)3609;
int zero = 0;
short var_17 = (short)-29372;
unsigned char var_18 = (unsigned char)202;
void init() {
}

void checksum() {
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
