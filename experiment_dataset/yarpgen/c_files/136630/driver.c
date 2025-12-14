#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 920907505;
signed char var_7 = (signed char)-5;
long long int var_8 = -9100045865810992453LL;
unsigned char var_11 = (unsigned char)37;
unsigned short var_14 = (unsigned short)11726;
signed char var_15 = (signed char)-120;
int zero = 0;
unsigned short var_16 = (unsigned short)11450;
int var_17 = -595020124;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)0;
long long int var_20 = -6877990959115626349LL;
unsigned short var_21 = (unsigned short)15613;
signed char var_22 = (signed char)-48;
unsigned char var_23 = (unsigned char)236;
unsigned char var_24 = (unsigned char)124;
unsigned char var_25 = (unsigned char)167;
unsigned long long int var_26 = 7469092954987153675ULL;
short var_27 = (short)16783;
unsigned char arr_1 [14] [14] ;
int arr_3 [14] ;
unsigned int arr_6 [21] [21] ;
long long int arr_9 [21] ;
unsigned long long int arr_13 [21] [21] ;
int arr_15 [21] [21] ;
unsigned int arr_21 [21] ;
_Bool arr_10 [21] ;
signed char arr_16 [21] [21] [21] ;
unsigned char arr_24 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)161;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = -939992697;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = 393439305U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = -1757995116794200169LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_13 [i_0] [i_1] = 2434348479842737081ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_15 [i_0] [i_1] = 1070275586;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_21 [i_0] = 3398240760U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (signed char)25;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_24 [i_0] [i_1] = (unsigned char)92;
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_16 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
