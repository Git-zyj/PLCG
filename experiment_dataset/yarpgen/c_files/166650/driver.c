#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-53;
unsigned short var_2 = (unsigned short)25527;
unsigned int var_3 = 1404391889U;
signed char var_5 = (signed char)81;
long long int var_8 = -3862371724064497776LL;
unsigned int var_11 = 3040150878U;
int var_12 = 785953808;
unsigned char var_13 = (unsigned char)237;
unsigned int var_16 = 3409666664U;
int zero = 0;
unsigned char var_17 = (unsigned char)133;
int var_18 = 210674728;
int var_19 = 943275011;
unsigned char var_20 = (unsigned char)10;
unsigned char var_21 = (unsigned char)28;
long long int var_22 = 6189920163344604746LL;
unsigned char var_23 = (unsigned char)189;
unsigned long long int var_24 = 18141142602719755006ULL;
unsigned long long int var_25 = 866605373938502356ULL;
signed char var_26 = (signed char)-55;
signed char var_27 = (signed char)98;
unsigned long long int var_28 = 10628464320869089666ULL;
int arr_0 [25] ;
signed char arr_1 [25] ;
short arr_2 [25] [25] ;
short arr_3 [18] [18] ;
signed char arr_4 [18] ;
unsigned char arr_5 [18] ;
long long int arr_7 [12] [12] ;
short arr_8 [12] ;
long long int arr_20 [15] ;
long long int arr_22 [20] [20] ;
signed char arr_23 [20] ;
_Bool arr_6 [18] ;
short arr_9 [12] [12] ;
unsigned short arr_16 [12] [12] [12] [12] ;
int arr_17 [12] ;
unsigned char arr_21 [15] ;
unsigned short arr_24 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = -689579983;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (signed char)-7;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (short)17468;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (short)18196;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (signed char)75 : (signed char)7;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (unsigned char)97;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_7 [i_0] [i_1] = 5407061499669152276LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = (short)8564;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_20 [i_0] = -5302831243970419162LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_22 [i_0] [i_1] = (i_1 % 2 == 0) ? 5556265355604511321LL : 6173910479495614445LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_23 [i_0] = (signed char)60;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_9 [i_0] [i_1] = (short)-11530;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned short)41132 : (unsigned short)20802;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_17 [i_0] = -453906381;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_21 [i_0] = (unsigned char)172;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_24 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)14113 : (unsigned short)11138;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_16 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
