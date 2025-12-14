#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 10077033669877651726ULL;
_Bool var_4 = (_Bool)0;
int var_6 = -1234792657;
int var_7 = 1359913007;
unsigned long long int var_8 = 14385881318994758996ULL;
short var_9 = (short)19128;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)0;
int zero = 0;
short var_12 = (short)6765;
unsigned int var_13 = 693662659U;
short var_14 = (short)19872;
unsigned long long int var_15 = 9618091467940863235ULL;
unsigned short var_16 = (unsigned short)12850;
short var_17 = (short)29862;
short var_18 = (short)-363;
int var_19 = 1374249954;
signed char var_20 = (signed char)94;
unsigned long long int var_21 = 15755685120425628894ULL;
_Bool var_22 = (_Bool)1;
short arr_0 [13] ;
unsigned short arr_1 [13] ;
long long int arr_2 [24] [24] ;
short arr_3 [24] ;
unsigned short arr_4 [24] [24] ;
short arr_7 [15] ;
_Bool arr_10 [22] ;
int arr_11 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (short)-25576;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned short)22518;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = -4981911770161869857LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (short)-19186;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)62618;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (short)14375;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_11 [i_0] [i_1] = -1507125699;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
