#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2391332689146560834LL;
unsigned long long int var_1 = 4752496348060075807ULL;
unsigned long long int var_2 = 17654081418488918266ULL;
unsigned long long int var_5 = 7268544977999119808ULL;
unsigned long long int var_6 = 10798649911741494756ULL;
unsigned int var_7 = 2677595853U;
signed char var_8 = (signed char)-41;
unsigned long long int var_9 = 12951212515130455451ULL;
unsigned short var_10 = (unsigned short)9295;
_Bool var_11 = (_Bool)1;
int zero = 0;
int var_12 = 842655054;
unsigned long long int var_13 = 5110347130216795877ULL;
_Bool var_14 = (_Bool)1;
int var_15 = -2012669406;
unsigned short var_16 = (unsigned short)2364;
unsigned long long int var_17 = 16786348192428999794ULL;
unsigned short var_18 = (unsigned short)28743;
unsigned int var_19 = 3312987565U;
int var_20 = 1504278097;
int var_21 = 876659823;
unsigned int arr_0 [12] [12] ;
signed char arr_1 [12] [12] ;
int arr_3 [12] [12] [12] ;
int arr_6 [21] ;
unsigned long long int arr_8 [21] [21] ;
unsigned int arr_10 [10] [10] ;
unsigned long long int arr_12 [10] ;
unsigned long long int arr_4 [12] ;
unsigned short arr_5 [12] [12] [12] ;
unsigned long long int arr_9 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = 1800911883U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -2078385983;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? -156489075 : -1218800511;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? 11273985540069629983ULL : 4881388446218050314ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_10 [i_0] [i_1] = 2202440904U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_12 [i_0] = 16912697367202662246ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = 6862191351841585208ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)50836;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? 3791868985314925341ULL : 5577351079374671978ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
