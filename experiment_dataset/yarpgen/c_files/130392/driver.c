#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)254;
unsigned char var_1 = (unsigned char)147;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)55;
int var_8 = 996059586;
int var_9 = -10647013;
unsigned short var_11 = (unsigned short)20716;
long long int var_12 = 2351421924396626173LL;
unsigned char var_13 = (unsigned char)45;
int zero = 0;
int var_14 = 1130237954;
unsigned long long int var_15 = 6182980393617233770ULL;
short var_16 = (short)25178;
short var_17 = (short)8468;
unsigned long long int var_18 = 966583213493395590ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
