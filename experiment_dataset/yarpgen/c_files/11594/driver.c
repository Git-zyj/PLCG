#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 106907913U;
unsigned int var_1 = 2554838034U;
unsigned int var_2 = 2484089749U;
unsigned char var_3 = (unsigned char)101;
unsigned char var_4 = (unsigned char)3;
unsigned int var_5 = 1199353707U;
unsigned int var_6 = 2455623023U;
unsigned long long int var_7 = 18034371199087366900ULL;
unsigned int var_8 = 1438728227U;
unsigned int var_9 = 1922675859U;
unsigned short var_10 = (unsigned short)48083;
unsigned int var_11 = 53176653U;
short var_12 = (short)8983;
int zero = 0;
signed char var_13 = (signed char)-20;
unsigned char var_14 = (unsigned char)90;
unsigned int var_15 = 2520331616U;
signed char var_16 = (signed char)(-127 - 1);
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
