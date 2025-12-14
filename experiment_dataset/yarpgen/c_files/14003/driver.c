#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -3472102996220511688LL;
unsigned char var_3 = (unsigned char)192;
long long int var_4 = 7282222465950430734LL;
unsigned char var_5 = (unsigned char)43;
int var_8 = 626712803;
unsigned char var_9 = (unsigned char)134;
long long int var_10 = 8445885145981835727LL;
int var_11 = 101647190;
unsigned char var_12 = (unsigned char)37;
int var_14 = -193641958;
_Bool var_15 = (_Bool)1;
int var_16 = 218510321;
long long int var_17 = 8872303363127969076LL;
int zero = 0;
long long int var_20 = 5615042945413177099LL;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)203;
int var_23 = -67355613;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
