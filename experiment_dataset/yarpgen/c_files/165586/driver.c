#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)29046;
long long int var_1 = -5227838580805596357LL;
_Bool var_2 = (_Bool)0;
long long int var_3 = -5668731931332336475LL;
int var_5 = -271175991;
int var_6 = -363216945;
unsigned long long int var_7 = 12436042818477584379ULL;
int var_8 = -1546290074;
unsigned long long int var_9 = 12518054657029948971ULL;
unsigned char var_10 = (unsigned char)227;
unsigned int var_11 = 1151784472U;
int zero = 0;
signed char var_12 = (signed char)-64;
long long int var_13 = -1118289208879638125LL;
_Bool var_14 = (_Bool)1;
long long int var_15 = -5585616818127240637LL;
int var_16 = 2102664819;
short var_17 = (short)6714;
int var_18 = -1245385430;
unsigned short var_19 = (unsigned short)39819;
unsigned long long int var_20 = 2679265145091668998ULL;
long long int var_21 = 5250024933616114044LL;
unsigned char var_22 = (unsigned char)11;
unsigned char var_23 = (unsigned char)124;
unsigned long long int var_24 = 5882323217661557972ULL;
_Bool var_25 = (_Bool)0;
int var_26 = 752452619;
unsigned int var_27 = 1053095733U;
unsigned char var_28 = (unsigned char)111;
_Bool var_29 = (_Bool)0;
unsigned int var_30 = 1792946080U;
long long int var_31 = 3519017751202827093LL;
unsigned char arr_1 [10] ;
long long int arr_2 [10] [10] ;
short arr_3 [10] [10] ;
unsigned int arr_8 [10] [10] ;
signed char arr_12 [10] ;
unsigned char arr_14 [10] ;
signed char arr_13 [10] [10] ;
unsigned char arr_21 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned char)171;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? -3528295694914022787LL : -4264762877197933570LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (short)302;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_8 [i_0] [i_1] = 2215136358U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_12 [i_0] = (signed char)-1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (unsigned char)182 : (unsigned char)90;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_13 [i_0] [i_1] = (signed char)24;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_21 [i_0] = (unsigned char)178;
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_21 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
