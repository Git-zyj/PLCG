#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 9907239998004696693ULL;
short var_3 = (short)5781;
unsigned short var_4 = (unsigned short)62849;
long long int var_6 = 5132422615713107071LL;
unsigned char var_7 = (unsigned char)169;
signed char var_8 = (signed char)-76;
unsigned short var_9 = (unsigned short)44603;
signed char var_10 = (signed char)-17;
unsigned char var_11 = (unsigned char)225;
short var_12 = (short)-3;
long long int var_13 = -2434981233178919107LL;
int zero = 0;
unsigned short var_16 = (unsigned short)31866;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)9995;
unsigned short var_19 = (unsigned short)41265;
unsigned char var_20 = (unsigned char)59;
unsigned int var_21 = 3649370923U;
unsigned short var_22 = (unsigned short)64783;
unsigned long long int var_23 = 8195432927344340024ULL;
int var_24 = -1619973320;
short var_25 = (short)22515;
unsigned char var_26 = (unsigned char)13;
short var_27 = (short)-28657;
unsigned char var_28 = (unsigned char)190;
unsigned short var_29 = (unsigned short)14782;
long long int var_30 = -6737561889160224202LL;
unsigned short var_31 = (unsigned short)23594;
unsigned int var_32 = 4225215430U;
int arr_0 [12] ;
unsigned int arr_1 [12] ;
unsigned char arr_2 [12] [12] ;
_Bool arr_3 [12] [12] ;
_Bool arr_6 [12] [12] [12] ;
int arr_7 [12] ;
_Bool arr_11 [12] [12] ;
unsigned short arr_12 [12] ;
int arr_13 [12] ;
unsigned short arr_26 [20] ;
short arr_27 [20] ;
_Bool arr_28 [20] [20] ;
long long int arr_10 [12] [12] [12] ;
unsigned short arr_14 [12] [12] ;
unsigned char arr_17 [12] ;
unsigned char arr_21 [12] [12] ;
unsigned short arr_24 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = -268907829;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 15977862U : 2250772384U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)65;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = 885592224;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_11 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_12 [i_0] = (unsigned short)538;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_13 [i_0] = 583301730;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_26 [i_0] = (unsigned short)60627;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_27 [i_0] = (short)-29273;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_28 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -4217681895240171840LL : -2521066450342683223LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_14 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)7617 : (unsigned short)7429;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (unsigned char)51 : (unsigned char)74;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_21 [i_0] [i_1] = (unsigned char)243;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_24 [i_0] [i_1] = (unsigned short)38495;
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
