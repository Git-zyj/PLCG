#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10468185896752563674ULL;
unsigned short var_3 = (unsigned short)60050;
unsigned short var_4 = (unsigned short)4282;
short var_5 = (short)-23107;
unsigned char var_7 = (unsigned char)94;
unsigned short var_9 = (unsigned short)42016;
short var_12 = (short)1980;
long long int var_16 = 7482391354635527876LL;
short var_17 = (short)18827;
int zero = 0;
unsigned long long int var_18 = 9216697096483346661ULL;
long long int var_19 = 112087610828235454LL;
short var_20 = (short)11899;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
