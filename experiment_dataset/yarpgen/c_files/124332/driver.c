#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3194926896455360596ULL;
unsigned short var_1 = (unsigned short)61456;
short var_3 = (short)-29829;
long long int var_4 = -2305082761046554271LL;
_Bool var_7 = (_Bool)0;
int var_11 = 161758102;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)18158;
int zero = 0;
unsigned short var_14 = (unsigned short)25959;
unsigned short var_15 = (unsigned short)25407;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 13074694251425897407ULL;
unsigned int var_18 = 4100895888U;
unsigned short var_19 = (unsigned short)5888;
short var_20 = (short)-15295;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 1009679043847047419ULL;
signed char var_23 = (signed char)4;
signed char arr_0 [21] ;
long long int arr_1 [21] ;
unsigned long long int arr_2 [21] ;
signed char arr_9 [13] [13] [13] ;
unsigned short arr_10 [13] [13] [13] ;
unsigned long long int arr_11 [13] [13] ;
_Bool arr_15 [17] ;
signed char arr_16 [17] ;
unsigned short arr_3 [21] ;
signed char arr_13 [13] [13] ;
signed char arr_23 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (signed char)115 : (signed char)-102;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 666399071604352143LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 10674166243888558006ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (signed char)-53;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)34241 : (unsigned short)28504;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? 14469654651132901130ULL : 5067780438430228281ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_15 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_16 [i_0] = (signed char)111;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)62592 : (unsigned short)43932;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_13 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-94 : (signed char)3;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_23 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-114 : (signed char)-125;
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_23 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
