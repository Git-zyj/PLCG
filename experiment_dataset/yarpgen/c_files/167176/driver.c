#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -348643873381497904LL;
unsigned long long int var_5 = 17788653814593438783ULL;
long long int var_9 = -3718576615582683109LL;
unsigned short var_10 = (unsigned short)37604;
_Bool var_13 = (_Bool)1;
unsigned short var_15 = (unsigned short)13586;
unsigned long long int var_16 = 12091153725506877762ULL;
int zero = 0;
short var_18 = (short)-15621;
_Bool var_19 = (_Bool)0;
short var_20 = (short)-26073;
unsigned int var_21 = 1763861296U;
_Bool var_22 = (_Bool)0;
short var_23 = (short)-4233;
unsigned short var_24 = (unsigned short)62709;
int var_25 = 853843558;
long long int arr_3 [13] ;
long long int arr_7 [13] [13] [13] ;
long long int arr_8 [13] ;
short arr_10 [22] ;
long long int arr_11 [22] ;
unsigned short arr_12 [22] ;
unsigned int arr_13 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 4508031218131840352LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 6512108711710416974LL : -6252116490841835178LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = 8379927299779887449LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (short)-10557 : (short)15871;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 8118572212025485547LL : -3318490980022268074LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (unsigned short)24456 : (unsigned short)50570;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 810658660U : 928325244U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
