#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)95;
long long int var_2 = -6628434641532944265LL;
unsigned int var_3 = 326012676U;
long long int var_4 = 5121570908629796646LL;
signed char var_5 = (signed char)74;
unsigned int var_6 = 3672207935U;
long long int var_7 = 2442306873046030359LL;
unsigned short var_9 = (unsigned short)41812;
long long int var_10 = -4892999617424168336LL;
long long int var_11 = -8819552978518854508LL;
long long int var_12 = 6066764390765424001LL;
long long int var_13 = 1479112465398997271LL;
signed char var_14 = (signed char)82;
unsigned int var_15 = 2624804840U;
int zero = 0;
long long int var_16 = 6467228772863453231LL;
signed char var_17 = (signed char)-48;
signed char var_18 = (signed char)-85;
unsigned short var_19 = (unsigned short)12846;
long long int var_20 = -3031290958629802976LL;
unsigned int arr_0 [20] ;
long long int arr_1 [20] ;
signed char arr_2 [20] ;
signed char arr_4 [20] [20] ;
signed char arr_5 [20] [20] ;
unsigned int arr_8 [20] [20] ;
unsigned int arr_9 [20] [20] ;
signed char arr_11 [20] [20] ;
signed char arr_12 [20] ;
long long int arr_6 [20] ;
long long int arr_13 [20] [20] [20] ;
signed char arr_14 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 2899765705U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 7887742394455678613LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (signed char)-78;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-91;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)-77;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_8 [i_0] [i_1] = 769877775U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_9 [i_0] [i_1] = 2966549848U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)11 : (signed char)-77;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (signed char)-119 : (signed char)102;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = 6282604843360428343LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -4330847305060971722LL : -5991067571424948248LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_14 [i_0] = (signed char)127;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
