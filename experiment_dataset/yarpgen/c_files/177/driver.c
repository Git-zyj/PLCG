#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)60143;
unsigned long long int var_1 = 2656356055836058819ULL;
unsigned int var_2 = 3002349248U;
unsigned short var_3 = (unsigned short)20552;
int var_4 = 24730682;
unsigned int var_5 = 2243541652U;
unsigned int var_6 = 4149116124U;
int var_7 = -327867718;
unsigned int var_8 = 996825343U;
int var_9 = -1398307059;
unsigned int var_10 = 3597657485U;
int zero = 0;
int var_11 = 1433888849;
unsigned int var_12 = 1321012392U;
short var_13 = (short)22875;
short var_14 = (short)2051;
short var_15 = (short)28245;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)65331;
int var_18 = -1884965249;
int var_19 = -1906425709;
unsigned long long int var_20 = 12738355134811726800ULL;
unsigned int var_21 = 1824751205U;
signed char var_22 = (signed char)44;
int var_23 = -1022047023;
unsigned long long int var_24 = 10492766904487891598ULL;
int var_25 = 1841579208;
short var_26 = (short)25798;
unsigned char var_27 = (unsigned char)216;
int var_28 = 588566953;
int var_29 = -1210219387;
unsigned char var_30 = (unsigned char)187;
int var_31 = 2038487651;
unsigned char var_32 = (unsigned char)176;
unsigned int var_33 = 1858820943U;
signed char var_34 = (signed char)-41;
int var_35 = -1299545346;
unsigned int var_36 = 3998623412U;
_Bool var_37 = (_Bool)0;
short var_38 = (short)-32297;
int arr_1 [22] ;
short arr_2 [22] ;
long long int arr_4 [22] ;
long long int arr_5 [22] [22] [22] ;
short arr_6 [22] [22] ;
_Bool arr_8 [22] ;
signed char arr_9 [22] [22] [22] ;
unsigned long long int arr_10 [18] ;
signed char arr_13 [18] [18] ;
signed char arr_16 [18] [18] [18] ;
signed char arr_17 [18] [18] ;
_Bool arr_20 [18] [18] [18] ;
unsigned int arr_18 [18] [18] ;
short arr_22 [18] [18] [18] [18] ;
unsigned short arr_29 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = -1693707412;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (short)14486;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = 1499332339646788055LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -3366610724367544519LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = (short)13954;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (signed char)-43;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_10 [i_0] = 6510489319954806514ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_13 [i_0] [i_1] = (signed char)-45;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (signed char)2;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_17 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)127 : (signed char)-118;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_18 [i_0] [i_1] = (i_0 % 2 == 0) ? 4292817502U : 333678403U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (short)-9115 : (short)13287;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_29 [i_0] [i_1] = (unsigned short)23260;
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    hash(&seed, arr_22 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_29 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
