#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)28345;
unsigned char var_1 = (unsigned char)219;
unsigned char var_2 = (unsigned char)61;
unsigned char var_3 = (unsigned char)96;
short var_4 = (short)4404;
unsigned short var_5 = (unsigned short)17437;
unsigned char var_6 = (unsigned char)224;
long long int var_7 = -7687967257587011511LL;
signed char var_8 = (signed char)-122;
_Bool var_9 = (_Bool)0;
long long int var_10 = 1969567378742590627LL;
unsigned long long int var_11 = 6635855380976412293ULL;
unsigned long long int var_13 = 12315663438476542547ULL;
short var_16 = (short)27505;
int zero = 0;
unsigned char var_17 = (unsigned char)155;
signed char var_18 = (signed char)44;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)9315;
unsigned int var_21 = 2637363073U;
signed char var_22 = (signed char)-94;
long long int var_23 = -7834309899337821256LL;
unsigned long long int var_24 = 16726067910836012673ULL;
unsigned long long int var_25 = 3422356766096118350ULL;
unsigned int var_26 = 967780077U;
long long int var_27 = 614025961838461550LL;
unsigned long long int var_28 = 10333743809643842394ULL;
_Bool var_29 = (_Bool)0;
unsigned char var_30 = (unsigned char)8;
short var_31 = (short)12237;
unsigned char arr_0 [18] ;
_Bool arr_1 [18] ;
unsigned short arr_3 [23] [23] ;
short arr_4 [23] [23] ;
long long int arr_5 [23] [23] ;
unsigned long long int arr_9 [17] ;
unsigned int arr_10 [17] [17] ;
unsigned long long int arr_13 [25] ;
unsigned char arr_21 [16] [16] ;
long long int arr_22 [16] [16] ;
unsigned int arr_23 [16] ;
long long int arr_2 [18] ;
unsigned char arr_6 [23] [23] ;
signed char arr_7 [23] ;
signed char arr_8 [23] [23] ;
_Bool arr_11 [17] [17] ;
signed char arr_25 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (unsigned char)27;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)13395;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (short)9721;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = -8208115333354223031LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = 11048770195632662996ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_10 [i_0] [i_1] = 1316559094U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_13 [i_0] = 9228207771622496198ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_21 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)248 : (unsigned char)6;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_22 [i_0] [i_1] = (i_1 % 2 == 0) ? -1338397430051235816LL : 4966431167235411877LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? 2938441028U : 1167872611U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = -118323464835429335LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)200;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (signed char)-32;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)118;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_11 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_25 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)122 : (signed char)-110;
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
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_25 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
