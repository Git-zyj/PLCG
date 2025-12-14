#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-10779;
long long int var_1 = -8741393438044770598LL;
long long int var_2 = -8684486256785739210LL;
long long int var_3 = -1467884436822896653LL;
int var_4 = -1841146444;
unsigned int var_5 = 897157548U;
unsigned int var_6 = 2515730864U;
long long int var_7 = 1499529690795801573LL;
int var_8 = -1364066741;
unsigned short var_9 = (unsigned short)10697;
_Bool var_10 = (_Bool)1;
short var_11 = (short)-22922;
unsigned short var_12 = (unsigned short)17070;
int zero = 0;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)1;
int var_15 = 1812175744;
signed char var_16 = (signed char)46;
long long int var_17 = 7156043079366885542LL;
unsigned long long int var_18 = 17476527187754843212ULL;
int var_19 = -1436062635;
signed char var_20 = (signed char)93;
long long int var_21 = 5206679443938500303LL;
unsigned int var_22 = 3631946306U;
unsigned short var_23 = (unsigned short)40393;
signed char var_24 = (signed char)115;
unsigned long long int var_25 = 1150034835608585020ULL;
long long int var_26 = 5919736403619306905LL;
int var_27 = -334591492;
unsigned char var_28 = (unsigned char)229;
signed char var_29 = (signed char)73;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
