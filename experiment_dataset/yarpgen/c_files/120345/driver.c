#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3598745054068466402LL;
short var_5 = (short)25556;
long long int var_6 = -1467212450033111534LL;
int var_7 = 1336605878;
unsigned char var_8 = (unsigned char)233;
signed char var_11 = (signed char)-77;
signed char var_16 = (signed char)-40;
int var_17 = 1683489864;
int zero = 0;
unsigned char var_20 = (unsigned char)252;
unsigned short var_21 = (unsigned short)37704;
_Bool var_22 = (_Bool)1;
signed char var_23 = (signed char)-54;
short var_24 = (short)-28403;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
