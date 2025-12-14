#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2017836010262742351ULL;
_Bool var_3 = (_Bool)1;
int var_4 = -395437493;
signed char var_5 = (signed char)-28;
unsigned long long int var_6 = 7523080015135445533ULL;
unsigned int var_8 = 2790345974U;
int var_11 = -1138971222;
unsigned long long int var_15 = 10141390283063792457ULL;
short var_17 = (short)-6442;
int zero = 0;
unsigned long long int var_19 = 17766918691566910930ULL;
unsigned long long int var_20 = 1665082048450175607ULL;
signed char var_21 = (signed char)-15;
unsigned long long int var_22 = 11539627408816145733ULL;
unsigned int var_23 = 2079803168U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
