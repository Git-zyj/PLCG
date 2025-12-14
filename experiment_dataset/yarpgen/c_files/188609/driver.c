#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6160555613236163767ULL;
int var_1 = 2055166885;
unsigned long long int var_3 = 14641023462200894643ULL;
signed char var_4 = (signed char)-74;
unsigned long long int var_5 = 15688523682319643044ULL;
unsigned long long int var_6 = 16492976042651963355ULL;
unsigned long long int var_7 = 2887426874786471350ULL;
unsigned long long int var_8 = 6941763256873028506ULL;
unsigned long long int var_9 = 12745671749989637871ULL;
long long int var_11 = 3065855377271339027LL;
unsigned char var_12 = (unsigned char)0;
int zero = 0;
long long int var_14 = 2614941387548966765LL;
_Bool var_15 = (_Bool)0;
int var_16 = 748784929;
unsigned short var_17 = (unsigned short)47982;
short var_18 = (short)21415;
int var_19 = 1327172329;
unsigned long long int var_20 = 11341163993132176144ULL;
unsigned char var_21 = (unsigned char)40;
short var_22 = (short)-24488;
short var_23 = (short)-14192;
unsigned long long int var_24 = 700224642486235355ULL;
signed char var_25 = (signed char)81;
unsigned long long int var_26 = 6725942618958308371ULL;
int arr_2 [21] [21] ;
_Bool arr_4 [21] [21] ;
short arr_5 [21] ;
_Bool arr_12 [21] ;
int arr_18 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = -1431393396;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (short)-31699;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_18 [i_0] = -1520750588;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
