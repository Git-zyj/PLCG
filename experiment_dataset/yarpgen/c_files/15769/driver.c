#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-21;
int var_3 = 779843507;
unsigned short var_4 = (unsigned short)56810;
_Bool var_8 = (_Bool)1;
int var_13 = 1436303018;
long long int var_15 = -8351092919335730117LL;
int zero = 0;
long long int var_17 = 698390954827146320LL;
long long int var_18 = -7776775227633795932LL;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)206;
unsigned short var_21 = (unsigned short)40263;
unsigned int var_22 = 2713850985U;
int var_23 = 1982322089;
_Bool var_24 = (_Bool)0;
signed char var_25 = (signed char)-102;
long long int var_26 = -5431670918125018840LL;
unsigned int arr_0 [23] ;
unsigned int arr_1 [23] ;
int arr_5 [23] [23] ;
unsigned long long int arr_6 [23] ;
long long int arr_10 [23] [23] [23] [23] [23] ;
unsigned long long int arr_11 [23] [23] [23] [23] ;
unsigned int arr_12 [23] [23] ;
short arr_3 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 1455640076U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 124523258U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = 238395300;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = 16515269002552025608ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? -7845371789299371153LL : -8093514369514229468LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = 16473576979150527736ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? 1989999295U : 3728982782U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-24353;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
