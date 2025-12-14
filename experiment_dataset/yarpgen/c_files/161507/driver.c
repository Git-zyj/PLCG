#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-109;
signed char var_1 = (signed char)-116;
short var_2 = (short)-3206;
signed char var_3 = (signed char)-33;
_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)-74;
unsigned short var_6 = (unsigned short)43656;
long long int var_8 = -2765758845318398465LL;
int var_9 = 1770890356;
unsigned int var_10 = 2269281036U;
int zero = 0;
unsigned char var_11 = (unsigned char)190;
unsigned short var_12 = (unsigned short)1789;
unsigned char var_13 = (unsigned char)60;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)132;
signed char var_16 = (signed char)84;
short var_17 = (short)5045;
unsigned char var_18 = (unsigned char)196;
short var_19 = (short)14132;
unsigned int var_20 = 3114553926U;
long long int arr_0 [19] ;
short arr_2 [19] [19] ;
unsigned short arr_4 [19] ;
unsigned char arr_5 [19] [19] ;
_Bool arr_6 [19] [19] [19] [19] ;
signed char arr_7 [19] [19] ;
unsigned short arr_8 [19] [19] [19] [19] [19] [19] ;
unsigned short arr_13 [19] ;
unsigned short arr_16 [24] ;
int arr_14 [19] ;
long long int arr_15 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? -5420118509917442483LL : 2217741706964829365LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-18901 : (short)10234;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (unsigned short)34792;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)9 : (unsigned char)25;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)100 : (signed char)-58;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? (unsigned short)35925 : (unsigned short)14190;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (unsigned short)61166 : (unsigned short)4373;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_16 [i_0] = (unsigned short)23607;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? -210556797 : 393043860;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? 3553870191717394629LL : -4694217442121915316LL;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
