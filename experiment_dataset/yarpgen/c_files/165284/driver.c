#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)27573;
_Bool var_2 = (_Bool)0;
unsigned int var_3 = 1968201007U;
unsigned int var_4 = 3235532606U;
unsigned int var_5 = 2266992962U;
int var_6 = 684944777;
unsigned char var_8 = (unsigned char)200;
long long int var_10 = -897551436841829129LL;
long long int var_12 = 8070089657019934017LL;
unsigned long long int var_14 = 5741503109554551494ULL;
short var_16 = (short)11399;
int zero = 0;
unsigned short var_18 = (unsigned short)26862;
int var_19 = 771763587;
unsigned char var_20 = (unsigned char)70;
int var_21 = -568474877;
unsigned int var_22 = 1840358057U;
unsigned char var_23 = (unsigned char)227;
unsigned int var_24 = 1881492336U;
unsigned int var_25 = 3624725022U;
unsigned int var_26 = 482969876U;
unsigned long long int var_27 = 4947677495548660998ULL;
long long int var_28 = 816533510762175801LL;
unsigned int var_29 = 1038828679U;
short var_30 = (short)5884;
unsigned int var_31 = 426923042U;
long long int var_32 = -5899042518681174708LL;
unsigned long long int var_33 = 1717926444811206212ULL;
unsigned int arr_0 [16] ;
unsigned short arr_1 [16] [16] ;
long long int arr_3 [11] ;
short arr_4 [11] ;
signed char arr_5 [19] [19] ;
long long int arr_6 [19] ;
short arr_7 [19] ;
long long int arr_10 [22] [22] ;
unsigned int arr_11 [22] [22] ;
unsigned char arr_12 [22] [22] ;
unsigned char arr_14 [18] ;
unsigned short arr_21 [18] ;
unsigned int arr_2 [16] [16] ;
long long int arr_9 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 1637081125U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)41607;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 4973967564728157146LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (short)8506;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)48 : (signed char)97;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = -843017217531160853LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (short)25369;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_10 [i_0] [i_1] = 1514510076811884566LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_11 [i_0] [i_1] = 1509976804U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned char)16;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_14 [i_0] = (unsigned char)133;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? (unsigned short)52155 : (unsigned short)1118;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = 3430814756U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? 1498934051461628437LL : -6865301334031866043LL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
