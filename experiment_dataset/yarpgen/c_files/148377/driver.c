#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 731210887U;
long long int var_1 = 8255379512465811040LL;
unsigned char var_2 = (unsigned char)225;
signed char var_3 = (signed char)97;
unsigned long long int var_4 = 13356137789837248353ULL;
signed char var_5 = (signed char)127;
unsigned int var_7 = 1234633018U;
unsigned long long int var_8 = 137019897462276568ULL;
unsigned long long int var_9 = 16727867831359341738ULL;
unsigned short var_10 = (unsigned short)57229;
int zero = 0;
int var_11 = 1704038994;
unsigned long long int var_12 = 3086774972304373094ULL;
unsigned int var_13 = 3574690370U;
unsigned long long int var_14 = 10502179069336836564ULL;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 2813563329U;
unsigned long long int var_17 = 8725449009852199759ULL;
short var_18 = (short)17171;
unsigned long long int var_19 = 3678913619324466966ULL;
unsigned long long int var_20 = 8623488885768817220ULL;
unsigned short var_21 = (unsigned short)13883;
short var_22 = (short)976;
signed char var_23 = (signed char)20;
unsigned long long int var_24 = 7447656578818352759ULL;
int var_25 = 1195493613;
unsigned long long int var_26 = 9009096328278054096ULL;
short arr_0 [13] ;
unsigned long long int arr_1 [13] ;
long long int arr_2 [13] ;
unsigned long long int arr_3 [13] ;
signed char arr_7 [13] [13] [13] ;
_Bool arr_12 [13] [13] [13] [13] ;
unsigned long long int arr_24 [13] [13] [13] ;
unsigned long long int arr_15 [13] [13] ;
unsigned int arr_30 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (short)17762;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 16400409268885777838ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = -7868372261611068846LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 448589849512999614ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (signed char)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = 10744368449718083894ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_15 [i_0] [i_1] = (i_1 % 2 == 0) ? 526258572926170214ULL : 10493078669009624723ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_30 [i_0] [i_1] = 280789050U;
}

void checksum() {
    hash(&seed, var_11);
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_30 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
