#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)34;
unsigned long long int var_2 = 9364267428803861127ULL;
_Bool var_3 = (_Bool)0;
int var_7 = -723974325;
long long int var_8 = 5727394943112498021LL;
long long int var_10 = 5390569696522068217LL;
unsigned char var_11 = (unsigned char)49;
unsigned short var_13 = (unsigned short)26621;
unsigned long long int var_14 = 2057737067297450520ULL;
_Bool var_15 = (_Bool)0;
int var_16 = 39291440;
_Bool var_18 = (_Bool)0;
int zero = 0;
int var_19 = 2068199132;
unsigned long long int var_20 = 11808102550763189835ULL;
unsigned int var_21 = 3532945203U;
unsigned short var_22 = (unsigned short)13054;
unsigned char var_23 = (unsigned char)153;
_Bool var_24 = (_Bool)0;
_Bool var_25 = (_Bool)1;
int var_26 = 88867206;
unsigned int var_27 = 3127113841U;
long long int arr_1 [19] ;
unsigned long long int arr_2 [19] ;
unsigned int arr_5 [19] ;
unsigned int arr_7 [19] [19] [19] ;
unsigned int arr_8 [19] [19] [19] [19] [19] ;
int arr_11 [19] ;
signed char arr_14 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 1944018717603537627LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 7151590143967282325ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = 1113787068U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 1509440525U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] = 2226100832U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = 331952042;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_14 [i_0] = (signed char)51;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
