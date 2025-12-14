#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3795995537U;
unsigned short var_2 = (unsigned short)31181;
int var_5 = 1261904568;
_Bool var_7 = (_Bool)0;
unsigned long long int var_9 = 2054236580134063987ULL;
unsigned short var_10 = (unsigned short)31570;
unsigned int var_13 = 716302545U;
unsigned short var_16 = (unsigned short)39580;
unsigned short var_18 = (unsigned short)36285;
int zero = 0;
_Bool var_19 = (_Bool)1;
long long int var_20 = -3578070932221410829LL;
int var_21 = 139625886;
unsigned long long int var_22 = 12565368938899723033ULL;
int var_23 = 926007693;
unsigned int var_24 = 4227631400U;
long long int var_25 = -4726730073034632460LL;
_Bool var_26 = (_Bool)1;
unsigned short var_27 = (unsigned short)40587;
int arr_3 [22] [22] ;
unsigned int arr_4 [22] ;
_Bool arr_7 [22] [22] ;
unsigned long long int arr_8 [22] [22] ;
long long int arr_2 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = 313129287;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 301611065U : 517540084U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_8 [i_0] [i_1] = 11637162208019062632ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 3898213264424197988LL : 5394754144759246097LL;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
