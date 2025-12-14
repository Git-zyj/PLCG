#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 477981310127829913ULL;
unsigned int var_13 = 442731154U;
int zero = 0;
unsigned long long int var_15 = 1314318576452188391ULL;
int var_16 = -1750321166;
long long int var_17 = 241254663412761911LL;
signed char var_18 = (signed char)-55;
unsigned long long int var_19 = 15534493484955253948ULL;
unsigned char var_20 = (unsigned char)144;
unsigned long long int var_21 = 12291409050434054464ULL;
signed char var_22 = (signed char)63;
unsigned int var_23 = 851764912U;
unsigned int var_24 = 3328989572U;
int var_25 = 53921316;
int var_26 = -1091844226;
unsigned int var_27 = 4080872003U;
unsigned int var_28 = 140330901U;
unsigned char var_29 = (unsigned char)35;
unsigned short var_30 = (unsigned short)18383;
signed char var_31 = (signed char)-57;
unsigned long long int var_32 = 17962205124534583985ULL;
short var_33 = (short)-18512;
int var_34 = 113809547;
signed char var_35 = (signed char)55;
unsigned char var_36 = (unsigned char)163;
_Bool var_37 = (_Bool)1;
unsigned int arr_0 [21] ;
unsigned int arr_1 [21] ;
short arr_5 [21] ;
long long int arr_7 [14] ;
unsigned short arr_9 [14] [14] ;
int arr_17 [10] ;
signed char arr_20 [10] [10] [10] [10] ;
int arr_21 [10] ;
signed char arr_23 [10] ;
_Bool arr_8 [14] ;
int arr_25 [10] [10] ;
short arr_33 [10] [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 1295293029U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 1975766482U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (short)-1395;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = -6404753620041531132LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)8572;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_17 [i_0] = -344838239;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (signed char)-105 : (signed char)41;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? -1846203676 : 1049310823;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? (signed char)84 : (signed char)-106;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_25 [i_0] [i_1] = (i_0 % 2 == 0) ? -86031638 : 1671592368;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_33 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (short)-11208 : (short)24688;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_25 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_33 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
