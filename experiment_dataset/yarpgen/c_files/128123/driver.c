#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1808993788;
int var_2 = -26802138;
int var_4 = -748500267;
long long int var_5 = -4518059292216369696LL;
unsigned char var_6 = (unsigned char)75;
long long int var_11 = -5761131861457572634LL;
int var_14 = -664398652;
int zero = 0;
short var_15 = (short)15765;
unsigned short var_16 = (unsigned short)55401;
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
