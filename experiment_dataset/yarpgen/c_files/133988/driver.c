#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
long long int var_5 = 3714784378854075007LL;
signed char var_6 = (signed char)104;
unsigned long long int var_8 = 3878739168005289221ULL;
unsigned long long int var_11 = 6994365911226137235ULL;
unsigned short var_13 = (unsigned short)2279;
unsigned short var_14 = (unsigned short)22267;
short var_15 = (short)-20836;
unsigned short var_18 = (unsigned short)3282;
int zero = 0;
short var_19 = (short)6434;
unsigned int var_20 = 2836168788U;
long long int var_21 = -447203911245153578LL;
long long int var_22 = 6187277582849703912LL;
unsigned long long int var_23 = 10530813086451583018ULL;
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
