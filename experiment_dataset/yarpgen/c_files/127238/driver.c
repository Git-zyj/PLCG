#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 513889128U;
unsigned char var_2 = (unsigned char)70;
unsigned long long int var_3 = 10046918679845681915ULL;
int var_4 = 1732271629;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 12729813700937070774ULL;
unsigned long long int var_7 = 5127678250795287267ULL;
int var_8 = 443281116;
_Bool var_9 = (_Bool)0;
unsigned char var_10 = (unsigned char)77;
unsigned long long int var_13 = 10757040715833509043ULL;
short var_15 = (short)14623;
unsigned char var_17 = (unsigned char)31;
unsigned short var_18 = (unsigned short)7770;
int zero = 0;
unsigned long long int var_20 = 7905479837015924408ULL;
long long int var_21 = -5322988265910776631LL;
int var_22 = -1613723073;
unsigned char var_23 = (unsigned char)96;
unsigned int var_24 = 369426842U;
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
