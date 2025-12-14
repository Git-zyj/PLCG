#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)107;
unsigned int var_2 = 3728538303U;
signed char var_5 = (signed char)82;
unsigned long long int var_9 = 1702768352501835011ULL;
unsigned char var_11 = (unsigned char)198;
signed char var_13 = (signed char)-6;
unsigned long long int var_14 = 17282212884039072498ULL;
short var_15 = (short)3428;
long long int var_18 = 808781386101101004LL;
int zero = 0;
unsigned long long int var_20 = 1291563120941908317ULL;
int var_21 = -1083277675;
unsigned long long int var_22 = 4096700640085001371ULL;
int var_23 = -569104279;
int var_24 = -1469531461;
long long int var_25 = 3119362733525965294LL;
unsigned long long int var_26 = 909660017080596590ULL;
int var_27 = -1271360269;
unsigned long long int var_28 = 1512944875186158098ULL;
long long int var_29 = 5262258759571516463LL;
int var_30 = -263125296;
int var_31 = -1304453870;
short arr_0 [13] ;
unsigned long long int arr_1 [13] ;
int arr_2 [13] ;
int arr_4 [13] ;
unsigned char arr_5 [13] [13] [13] ;
unsigned long long int arr_7 [13] [13] [13] ;
_Bool arr_8 [13] ;
unsigned char arr_12 [13] [13] [13] [13] ;
unsigned int arr_18 [13] ;
unsigned short arr_23 [13] [13] ;
unsigned long long int arr_29 [13] ;
unsigned char arr_44 [13] [13] [13] [13] ;
unsigned char arr_3 [13] ;
unsigned long long int arr_10 [13] [13] [13] ;
unsigned long long int arr_16 [13] [13] ;
unsigned long long int arr_17 [13] ;
unsigned long long int arr_21 [13] [13] ;
unsigned char arr_38 [13] [13] ;
int arr_47 [13] [13] [13] ;
unsigned char arr_48 [13] [13] [13] [13] [13] ;
unsigned int arr_49 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (short)-31960;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 1491241750892007794ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = -1440301513;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = -242772267;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)101;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 2475109017285682774ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned char)49 : (unsigned char)45;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_18 [i_0] = 3446170517U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_23 [i_0] [i_1] = (unsigned short)55400;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_29 [i_0] = 1331814210874504173ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_44 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned char)115 : (unsigned char)223;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (unsigned char)121;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 6684693096871719786ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_16 [i_0] [i_1] = 10622305254878990453ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_17 [i_0] = 2120195091244661485ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_21 [i_0] [i_1] = 12183440820590693732ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_38 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)208 : (unsigned char)174;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_47 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -1111298450 : 104855141;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_48 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (unsigned char)0 : (unsigned char)152;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_49 [i_0] = 4069332699U;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_38 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_47 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        hash(&seed, arr_48 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_49 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
