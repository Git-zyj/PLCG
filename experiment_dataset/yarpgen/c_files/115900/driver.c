#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2254625869462690587LL;
int var_2 = -498779904;
unsigned int var_3 = 1094954699U;
unsigned short var_8 = (unsigned short)60784;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)36877;
long long int var_12 = -3963047270446138256LL;
long long int var_13 = 3801241901171428928LL;
unsigned char var_14 = (unsigned char)72;
short var_15 = (short)-11553;
unsigned short var_16 = (unsigned short)61707;
long long int var_17 = 3024430217513667161LL;
long long int var_18 = -7498995543664376821LL;
int zero = 0;
unsigned long long int var_19 = 12057664345235678612ULL;
long long int var_20 = 5537288636758672913LL;
short var_21 = (short)8968;
unsigned char var_22 = (unsigned char)168;
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
