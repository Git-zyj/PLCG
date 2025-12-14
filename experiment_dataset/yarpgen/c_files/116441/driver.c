#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 252152412U;
unsigned char var_1 = (unsigned char)243;
long long int var_3 = -243387993464341353LL;
unsigned short var_5 = (unsigned short)13276;
unsigned short var_6 = (unsigned short)52538;
unsigned int var_8 = 3254924704U;
unsigned short var_10 = (unsigned short)45328;
long long int var_11 = 1898440027425051676LL;
unsigned long long int var_12 = 12709708275137170405ULL;
long long int var_13 = -5393956173719797771LL;
unsigned long long int var_14 = 9074727889072713974ULL;
long long int var_15 = -3317618732159256677LL;
int zero = 0;
unsigned int var_16 = 2134085509U;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)25437;
unsigned int var_19 = 1571576300U;
unsigned char var_20 = (unsigned char)152;
unsigned long long int arr_0 [19] [19] ;
unsigned int arr_1 [19] [19] ;
unsigned char arr_2 [19] ;
_Bool arr_3 [19] ;
unsigned long long int arr_4 [19] ;
unsigned long long int arr_5 [19] ;
unsigned char arr_9 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = 15211427262886990665ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = 2797486464U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned char)194;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = 5852993504686938797ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = 11074211074691452208ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = (unsigned char)224;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
