#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1736456060;
unsigned long long int var_1 = 4830825576436978373ULL;
unsigned char var_2 = (unsigned char)53;
int var_3 = 1995309612;
unsigned char var_4 = (unsigned char)170;
short var_5 = (short)-28046;
unsigned short var_6 = (unsigned short)13835;
unsigned short var_7 = (unsigned short)52461;
long long int var_8 = 1128017259864882229LL;
unsigned char var_9 = (unsigned char)114;
short var_10 = (short)24909;
long long int var_11 = 6052910822894379637LL;
int zero = 0;
long long int var_12 = 62146030048721328LL;
unsigned short var_13 = (unsigned short)53005;
unsigned short var_14 = (unsigned short)13185;
signed char var_15 = (signed char)-12;
signed char var_16 = (signed char)-15;
signed char var_17 = (signed char)-15;
unsigned short var_18 = (unsigned short)46940;
unsigned char var_19 = (unsigned char)228;
signed char var_20 = (signed char)92;
long long int var_21 = -1569672351399619878LL;
short var_22 = (short)27049;
int var_23 = 1279348169;
unsigned char var_24 = (unsigned char)61;
unsigned char arr_0 [17] ;
short arr_3 [17] ;
unsigned char arr_4 [17] [17] [17] ;
long long int arr_17 [23] ;
_Bool arr_18 [23] [23] ;
long long int arr_20 [25] [25] ;
short arr_22 [25] [25] [25] ;
unsigned char arr_24 [25] ;
signed char arr_28 [25] [25] [25] ;
int arr_29 [25] ;
unsigned char arr_30 [25] ;
int arr_32 [25] [25] ;
unsigned int arr_13 [17] [17] ;
signed char arr_14 [17] ;
signed char arr_26 [25] [25] ;
short arr_27 [25] [25] ;
signed char arr_33 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (unsigned char)15;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (short)-11555;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)66;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_17 [i_0] = 8699444113738500504LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_18 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_20 [i_0] [i_1] = 4643495626391734650LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)-16524 : (short)-11404;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_24 [i_0] = (unsigned char)168;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = (signed char)115;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_29 [i_0] = -578012464;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_30 [i_0] = (i_0 % 2 == 0) ? (unsigned char)115 : (unsigned char)244;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_32 [i_0] [i_1] = (i_1 % 2 == 0) ? 274254185 : -1935471257;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_13 [i_0] [i_1] = 2244169549U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_14 [i_0] = (signed char)-9;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_26 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-112 : (signed char)-23;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_27 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)19898 : (short)-18967;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_33 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)-17 : (signed char)-109;
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_26 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_27 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_33 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
