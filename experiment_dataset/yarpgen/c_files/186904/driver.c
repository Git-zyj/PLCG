#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4690296979558435275ULL;
unsigned char var_2 = (unsigned char)88;
short var_4 = (short)26263;
unsigned long long int var_6 = 9332263920024140003ULL;
unsigned char var_7 = (unsigned char)175;
signed char var_9 = (signed char)-104;
long long int var_11 = -7279350175774919863LL;
unsigned short var_12 = (unsigned short)20835;
unsigned short var_13 = (unsigned short)60130;
signed char var_14 = (signed char)95;
int zero = 0;
short var_15 = (short)-8984;
unsigned char var_16 = (unsigned char)150;
signed char var_17 = (signed char)33;
_Bool var_18 = (_Bool)1;
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
