#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)7926;
short var_2 = (short)-5124;
short var_3 = (short)11848;
int var_4 = 561602745;
short var_5 = (short)25457;
short var_7 = (short)11335;
long long int var_9 = 2928116559789046624LL;
int zero = 0;
short var_10 = (short)-1701;
unsigned int var_11 = 2252892331U;
unsigned char var_12 = (unsigned char)183;
int var_13 = -1361349091;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
