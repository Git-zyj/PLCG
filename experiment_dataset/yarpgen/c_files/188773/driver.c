#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)65;
_Bool var_1 = (_Bool)0;
int var_2 = -303133091;
long long int var_3 = 5281351817167682748LL;
int var_4 = 305410909;
long long int var_5 = 368714358618989654LL;
long long int var_8 = -8311742371097209343LL;
unsigned int var_11 = 428035210U;
short var_12 = (short)-3823;
int zero = 0;
unsigned short var_13 = (unsigned short)26681;
unsigned long long int var_14 = 9791205880949769516ULL;
signed char var_15 = (signed char)-89;
short var_16 = (short)-16668;
long long int var_17 = 4523562677969795323LL;
unsigned int var_18 = 3927148603U;
long long int var_19 = -1914211738035891078LL;
unsigned short var_20 = (unsigned short)4265;
unsigned char var_21 = (unsigned char)104;
long long int var_22 = 5764955560128568098LL;
_Bool var_23 = (_Bool)1;
unsigned char var_24 = (unsigned char)176;
unsigned int var_25 = 2429277943U;
unsigned char var_26 = (unsigned char)84;
unsigned char var_27 = (unsigned char)178;
short arr_0 [15] ;
unsigned int arr_2 [15] [15] ;
unsigned int arr_4 [15] ;
short arr_5 [15] [15] [15] ;
unsigned short arr_8 [15] [15] [15] [15] [15] [15] ;
long long int arr_9 [15] [15] ;
short arr_10 [15] [15] ;
unsigned long long int arr_12 [15] ;
unsigned long long int arr_17 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (short)-15362;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = 2104787362U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = 1357190369U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (short)-8352;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)56555;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_9 [i_0] [i_1] = 4115547008354122875LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_10 [i_0] [i_1] = (short)-8451;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 18282198427629827000ULL : 15482837178039211153ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_17 [i_0] [i_1] = (i_1 % 2 == 0) ? 15792296024349760742ULL : 7640738915922425413ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
