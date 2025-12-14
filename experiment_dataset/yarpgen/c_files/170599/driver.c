#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2135526659;
signed char var_1 = (signed char)111;
int var_7 = -430851630;
short var_8 = (short)-2931;
unsigned char var_9 = (unsigned char)51;
long long int var_10 = -7967227359462280990LL;
unsigned short var_13 = (unsigned short)34999;
_Bool var_14 = (_Bool)1;
int zero = 0;
signed char var_19 = (signed char)59;
unsigned short var_20 = (unsigned short)31506;
signed char var_21 = (signed char)-6;
long long int var_22 = 3677926222411830960LL;
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
