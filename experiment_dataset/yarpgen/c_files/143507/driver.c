#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1886880965;
unsigned char var_1 = (unsigned char)86;
unsigned char var_2 = (unsigned char)157;
_Bool var_3 = (_Bool)0;
int var_5 = -307417702;
unsigned short var_6 = (unsigned short)55858;
short var_7 = (short)-3164;
int var_8 = 810296203;
unsigned long long int var_9 = 1953534405816349415ULL;
long long int var_10 = 2638269761628859622LL;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)-30;
short var_13 = (short)29792;
signed char var_14 = (signed char)5;
int zero = 0;
unsigned long long int var_16 = 16995304325092588484ULL;
signed char var_17 = (signed char)-44;
unsigned char var_18 = (unsigned char)42;
unsigned short var_19 = (unsigned short)59935;
unsigned int var_20 = 1233684741U;
short var_21 = (short)-30405;
int var_22 = 1006396842;
unsigned long long int var_23 = 8900177791635321022ULL;
unsigned long long int var_24 = 5465596269311810337ULL;
unsigned short var_25 = (unsigned short)48407;
unsigned long long int var_26 = 3741315245236488011ULL;
short var_27 = (short)-32211;
int arr_0 [17] ;
int arr_4 [17] ;
int arr_7 [17] [17] ;
int arr_12 [17] [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 1813292623;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = 968639007;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? 1156217288 : -886392232;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? -1845778879 : 1905826640;
}

void checksum() {
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
