#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10789860692507157750ULL;
unsigned long long int var_3 = 9733714018433139633ULL;
long long int var_4 = -63937740704270367LL;
short var_5 = (short)13137;
unsigned char var_7 = (unsigned char)40;
unsigned long long int var_9 = 13213118154080846364ULL;
unsigned char var_10 = (unsigned char)34;
unsigned long long int var_12 = 1000263489141141995ULL;
unsigned char var_18 = (unsigned char)217;
int zero = 0;
unsigned int var_19 = 1718326333U;
unsigned char var_20 = (unsigned char)114;
signed char var_21 = (signed char)60;
signed char var_22 = (signed char)-80;
long long int arr_0 [14] ;
long long int arr_2 [14] ;
signed char arr_4 [24] ;
signed char arr_5 [24] ;
unsigned long long int arr_3 [14] ;
signed char arr_6 [24] [24] ;
long long int arr_7 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = -8623554755715000337LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = -6503481574028089344LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (signed char)20;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (signed char)-2;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 7663746151984448420ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-55 : (signed char)91;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? 3152052125825739957LL : 1067345155839797525LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
