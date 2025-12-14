#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)33;
unsigned char var_1 = (unsigned char)117;
int var_2 = -577274397;
short var_3 = (short)-26933;
unsigned int var_4 = 2768366380U;
signed char var_5 = (signed char)21;
_Bool var_6 = (_Bool)0;
int var_7 = -1495808041;
short var_8 = (short)-26780;
unsigned int var_9 = 329817447U;
int zero = 0;
short var_10 = (short)22381;
short var_11 = (short)17160;
signed char var_12 = (signed char)-122;
short var_13 = (short)-16692;
unsigned short var_14 = (unsigned short)13179;
short var_15 = (short)-13935;
unsigned long long int var_16 = 8060712083613365194ULL;
unsigned int var_17 = 3334087845U;
unsigned long long int var_18 = 12182500007935320533ULL;
unsigned short var_19 = (unsigned short)62338;
int var_20 = 2106153382;
unsigned long long int var_21 = 14314604840729908309ULL;
unsigned char var_22 = (unsigned char)235;
_Bool var_23 = (_Bool)1;
signed char var_24 = (signed char)-64;
signed char var_25 = (signed char)-58;
unsigned short var_26 = (unsigned short)18076;
unsigned int var_27 = 4283019476U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
