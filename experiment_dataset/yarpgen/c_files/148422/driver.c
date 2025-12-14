#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13337273072697439553ULL;
int var_1 = 862957871;
unsigned long long int var_2 = 421285301301587306ULL;
short var_3 = (short)7548;
unsigned short var_4 = (unsigned short)14338;
int var_5 = 1344572536;
int var_6 = -987572667;
signed char var_7 = (signed char)-98;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)33381;
int var_10 = -48054521;
unsigned short var_12 = (unsigned short)42011;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 330184367898554548ULL;
unsigned char var_15 = (unsigned char)19;
int zero = 0;
unsigned long long int var_17 = 166794432034389933ULL;
signed char var_18 = (signed char)28;
long long int var_19 = 4965565642639850728LL;
signed char var_20 = (signed char)-71;
unsigned short var_21 = (unsigned short)63197;
int var_22 = 1851705088;
unsigned short var_23 = (unsigned short)8875;
short var_24 = (short)-2240;
signed char var_25 = (signed char)109;
unsigned long long int var_26 = 11187802146507036642ULL;
unsigned char var_27 = (unsigned char)216;
short var_28 = (short)24169;
int var_29 = -404219483;
int var_30 = 1049351401;
signed char var_31 = (signed char)2;
unsigned long long int var_32 = 4115889787544793619ULL;
int arr_0 [10] [10] ;
signed char arr_1 [10] [10] ;
int arr_2 [10] ;
signed char arr_3 [10] [10] [10] ;
int arr_4 [10] ;
unsigned long long int arr_9 [10] [10] ;
signed char arr_12 [12] [12] ;
_Bool arr_13 [12] ;
unsigned char arr_14 [12] [12] ;
signed char arr_15 [18] [18] ;
unsigned long long int arr_16 [18] ;
long long int arr_17 [14] ;
unsigned short arr_18 [14] [14] ;
unsigned long long int arr_10 [10] [10] [10] [10] ;
unsigned char arr_11 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = -1904667672;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)19;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = -120513681;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (signed char)-38;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = 881733879;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? 17418681586711113976ULL : 3234132859325816541ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_12 [i_0] [i_1] = (signed char)39;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_13 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_14 [i_0] [i_1] = (unsigned char)150;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_15 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)100 : (signed char)125;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_16 [i_0] = 12985349208258564767ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_17 [i_0] = -7546073332267626443LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_18 [i_0] [i_1] = (unsigned short)17361;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 16701727977165448490ULL : 7938548192469076866ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned char)118;
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
    hash(&seed, var_32);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_10 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
