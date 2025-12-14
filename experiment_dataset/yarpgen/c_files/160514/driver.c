#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)50999;
unsigned char var_2 = (unsigned char)105;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 3827688079375327392ULL;
unsigned short var_5 = (unsigned short)46033;
short var_6 = (short)-2301;
short var_7 = (short)28315;
long long int var_8 = 5448473684965405671LL;
unsigned int var_9 = 3671461344U;
unsigned short var_11 = (unsigned short)6178;
unsigned char var_12 = (unsigned char)220;
int zero = 0;
long long int var_14 = -2985538856204261327LL;
unsigned short var_15 = (unsigned short)6191;
unsigned long long int var_16 = 8864776062000780892ULL;
int var_17 = 726548442;
unsigned short var_18 = (unsigned short)8032;
int var_19 = -127543805;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
