#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -1138994199220080262LL;
short var_3 = (short)-27246;
short var_8 = (short)30538;
int var_9 = -760529729;
int var_10 = -662409870;
long long int var_11 = -8288436869550066198LL;
int var_12 = 652150389;
unsigned char var_13 = (unsigned char)49;
_Bool var_14 = (_Bool)0;
short var_15 = (short)10671;
short var_17 = (short)-32009;
int zero = 0;
short var_19 = (short)-14129;
unsigned short var_20 = (unsigned short)46565;
int var_21 = -366083061;
short var_22 = (short)27278;
unsigned char var_23 = (unsigned char)248;
short var_24 = (short)28573;
long long int var_25 = -2364809341712588810LL;
unsigned int var_26 = 3314098864U;
long long int var_27 = 183634329841284036LL;
unsigned long long int var_28 = 13011841826571225473ULL;
long long int var_29 = 461104785629670154LL;
long long int var_30 = -2421231652925054786LL;
int var_31 = -1209225250;
unsigned long long int var_32 = 15118668512574267661ULL;
unsigned long long int arr_0 [20] ;
unsigned short arr_1 [20] [20] ;
_Bool arr_2 [20] ;
short arr_5 [15] ;
long long int arr_9 [15] ;
long long int arr_12 [15] [15] [15] [15] ;
long long int arr_18 [15] ;
long long int arr_3 [20] ;
unsigned char arr_10 [15] [15] [15] ;
unsigned long long int arr_13 [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 7497411784649091506ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)42867;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (short)23127;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = 4631910139848914986LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = 5974984989900844044LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? 2214307087524878035LL : -3540622422859263602LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 4533795432691040823LL : -7214636238809716431LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)141 : (unsigned char)182;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 11615937222157882705ULL : 3791182597600958195ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    hash(&seed, arr_13 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
