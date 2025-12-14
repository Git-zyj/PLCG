#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)239;
unsigned long long int var_1 = 11459473137632257827ULL;
unsigned char var_3 = (unsigned char)152;
unsigned char var_4 = (unsigned char)16;
int var_5 = -883495524;
unsigned char var_7 = (unsigned char)27;
unsigned int var_8 = 2048010865U;
unsigned short var_9 = (unsigned short)48056;
signed char var_10 = (signed char)121;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)0;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 4498847327595960590ULL;
signed char var_16 = (signed char)35;
int zero = 0;
int var_18 = 928558806;
unsigned int var_19 = 650732651U;
long long int var_20 = -1085079276953137364LL;
unsigned long long int var_21 = 11239762156088451634ULL;
_Bool var_22 = (_Bool)0;
long long int var_23 = -1001590165684995576LL;
short var_24 = (short)9527;
unsigned int arr_0 [11] ;
unsigned int arr_3 [11] ;
unsigned long long int arr_6 [23] ;
unsigned long long int arr_7 [23] [23] ;
unsigned int arr_4 [11] ;
unsigned int arr_5 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 263449289U : 1873345527U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 767683698U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = 5406964632574577257ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_7 [i_0] [i_1] = 1967324164881870066ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 238530255U : 138433142U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? 1754535343U : 3841964068U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
