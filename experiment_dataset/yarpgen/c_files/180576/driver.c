#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-8198;
int var_1 = 1204380267;
unsigned long long int var_2 = 15670650402281182611ULL;
short var_3 = (short)2844;
unsigned short var_5 = (unsigned short)44257;
unsigned long long int var_6 = 11754985728693798267ULL;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)29391;
unsigned short var_9 = (unsigned short)14738;
signed char var_10 = (signed char)-53;
int zero = 0;
unsigned short var_11 = (unsigned short)60683;
unsigned short var_12 = (unsigned short)13480;
signed char var_13 = (signed char)-52;
short var_14 = (short)11668;
_Bool var_15 = (_Bool)0;
short var_16 = (short)31438;
int var_17 = 1417430369;
unsigned short var_18 = (unsigned short)64154;
unsigned int var_19 = 3131151683U;
signed char var_20 = (signed char)127;
int var_21 = -86786558;
int var_22 = -494938664;
_Bool var_23 = (_Bool)1;
unsigned short var_24 = (unsigned short)15502;
unsigned long long int var_25 = 13198418979600090755ULL;
int var_26 = -482033170;
int var_27 = 1245535253;
int arr_1 [13] ;
unsigned long long int arr_2 [13] ;
unsigned int arr_6 [23] [23] ;
unsigned short arr_7 [23] ;
unsigned long long int arr_14 [17] ;
int arr_18 [17] [17] ;
int arr_19 [17] [17] ;
signed char arr_3 [13] [13] ;
unsigned short arr_8 [23] [23] ;
int arr_16 [17] ;
unsigned long long int arr_23 [17] [17] ;
short arr_24 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = -1521763127;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 18083005674100923300ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = 1254970331U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (unsigned short)7117;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_14 [i_0] = 3553815649059237670ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_18 [i_0] [i_1] = (i_0 % 2 == 0) ? 625284013 : -1039990099;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_19 [i_0] [i_1] = (i_1 % 2 == 0) ? 693623021 : 2054074154;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)53;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned short)40246;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? -2125915054 : 2112883387;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_23 [i_0] [i_1] = (i_0 % 2 == 0) ? 8410121506432815786ULL : 11659632626594377368ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_24 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)29195 : (short)2120;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_23 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
