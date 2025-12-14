#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4173796770U;
signed char var_4 = (signed char)122;
long long int var_6 = 7826828829608581271LL;
unsigned int var_7 = 3339556915U;
short var_9 = (short)-20540;
unsigned int var_10 = 2510127679U;
unsigned int var_12 = 2698529407U;
unsigned long long int var_14 = 8581722011249947905ULL;
int zero = 0;
unsigned long long int var_15 = 8383279769751949841ULL;
signed char var_16 = (signed char)-97;
unsigned long long int var_17 = 13459653388708024518ULL;
_Bool var_18 = (_Bool)0;
short var_19 = (short)-13604;
unsigned short var_20 = (unsigned short)61494;
unsigned int var_21 = 1415581353U;
_Bool var_22 = (_Bool)0;
unsigned int var_23 = 268584645U;
signed char var_24 = (signed char)114;
long long int arr_1 [10] [10] ;
long long int arr_2 [10] [10] ;
unsigned long long int arr_4 [10] [10] [10] [10] ;
_Bool arr_6 [10] [10] [10] [10] ;
unsigned long long int arr_8 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = -6908673032852650558LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = -8891545868628479747LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = 10512537965327909818ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 16353061662600034134ULL : 11643383311094498472ULL;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
