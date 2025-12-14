#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1956902243;
unsigned short var_4 = (unsigned short)30035;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 5077704757789374461ULL;
unsigned short var_9 = (unsigned short)17554;
unsigned short var_11 = (unsigned short)235;
unsigned char var_12 = (unsigned char)98;
_Bool var_13 = (_Bool)0;
short var_15 = (short)5338;
int zero = 0;
short var_17 = (short)-11583;
unsigned char var_18 = (unsigned char)179;
unsigned char var_19 = (unsigned char)226;
unsigned short var_20 = (unsigned short)15837;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
