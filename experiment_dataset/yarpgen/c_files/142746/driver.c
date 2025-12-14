#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3343678050058312679LL;
signed char var_2 = (signed char)63;
short var_3 = (short)27823;
signed char var_4 = (signed char)-51;
unsigned short var_5 = (unsigned short)13237;
int var_8 = -1294930315;
long long int var_14 = 6785700472451558183LL;
_Bool var_15 = (_Bool)0;
int zero = 0;
long long int var_17 = -721574517380323838LL;
unsigned int var_18 = 1292104590U;
unsigned short var_19 = (unsigned short)38597;
unsigned short var_20 = (unsigned short)40558;
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
