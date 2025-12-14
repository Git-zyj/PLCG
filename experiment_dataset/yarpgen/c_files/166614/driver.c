#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 474011998;
unsigned short var_2 = (unsigned short)15313;
short var_3 = (short)-17085;
short var_4 = (short)-23457;
int var_5 = 1826203818;
_Bool var_6 = (_Bool)0;
long long int var_7 = 8902048802272460561LL;
_Bool var_8 = (_Bool)1;
int var_9 = -1973119642;
signed char var_10 = (signed char)-47;
int zero = 0;
int var_11 = -246450619;
unsigned int var_12 = 1460859372U;
unsigned int var_13 = 2890926929U;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
