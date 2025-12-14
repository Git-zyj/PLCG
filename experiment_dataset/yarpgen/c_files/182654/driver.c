#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-48;
short var_1 = (short)25568;
unsigned short var_2 = (unsigned short)61313;
signed char var_3 = (signed char)8;
unsigned short var_4 = (unsigned short)56225;
unsigned int var_5 = 3829038273U;
short var_6 = (short)30746;
short var_7 = (short)23625;
_Bool var_8 = (_Bool)0;
int var_9 = -723025908;
short var_10 = (short)16146;
short var_11 = (short)-12716;
int zero = 0;
unsigned long long int var_12 = 8550801711478371250ULL;
int var_13 = 694250133;
unsigned int var_14 = 2730723560U;
unsigned int var_15 = 2130209387U;
signed char var_16 = (signed char)77;
short var_17 = (short)-2856;
short var_18 = (short)-15801;
unsigned long long int var_19 = 7791308903708168304ULL;
unsigned long long int var_20 = 2504537117327597658ULL;
unsigned char var_21 = (unsigned char)2;
int var_22 = -2106848321;
_Bool var_23 = (_Bool)0;
unsigned short var_24 = (unsigned short)884;
signed char var_25 = (signed char)-62;
_Bool var_26 = (_Bool)0;
unsigned short var_27 = (unsigned short)38605;
signed char arr_0 [25] ;
short arr_1 [25] ;
unsigned char arr_3 [24] [24] ;
unsigned int arr_4 [24] ;
signed char arr_8 [23] [23] [23] ;
unsigned short arr_10 [23] [23] [23] [23] ;
int arr_11 [23] [23] [23] ;
unsigned short arr_12 [23] ;
short arr_15 [16] [16] ;
short arr_26 [25] [25] ;
int arr_27 [25] ;
int arr_28 [25] ;
signed char arr_2 [25] ;
unsigned long long int arr_14 [23] [23] [23] ;
int arr_21 [16] [16] [16] ;
unsigned int arr_24 [16] [16] ;
unsigned short arr_31 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (signed char)-101;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (short)-23709;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)210;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = 3273839239U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (signed char)(-127 - 1);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (unsigned short)29521;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 1825864309;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_12 [i_0] = (unsigned short)26170;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_15 [i_0] [i_1] = (short)7590;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_26 [i_0] [i_1] = (short)18193;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_27 [i_0] = -808019963;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_28 [i_0] = 1944563922;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (signed char)103;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 2746844677315736221ULL : 17365150707689715306ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1561096234 : -154777014;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_24 [i_0] [i_1] = (i_0 % 2 == 0) ? 1130883663U : 2521504757U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_31 [i_0] [i_1] [i_2] = (unsigned short)14916;
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
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_14 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_21 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_31 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
