#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -388840669;
unsigned char var_2 = (unsigned char)83;
signed char var_3 = (signed char)2;
int var_4 = 808717900;
unsigned long long int var_7 = 4277795027928516487ULL;
long long int var_10 = 484724519477363547LL;
unsigned char var_11 = (unsigned char)239;
short var_12 = (short)-615;
int var_13 = -181378275;
_Bool var_16 = (_Bool)1;
int var_18 = 1926397625;
int zero = 0;
_Bool var_19 = (_Bool)0;
int var_20 = 1321244805;
unsigned long long int var_21 = 10607636291328811504ULL;
unsigned char var_22 = (unsigned char)146;
int var_23 = 443558488;
_Bool arr_3 [24] ;
unsigned char arr_4 [24] [24] ;
unsigned char arr_5 [24] [24] [24] ;
int arr_7 [24] ;
long long int arr_8 [24] ;
long long int arr_9 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)29;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)7;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? -13288347 : -907755391;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 93635905930991845LL : 4888588560369736950LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 4159838797069993329LL : 4965769242308329473LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
