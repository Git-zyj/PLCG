#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1464079617944626052ULL;
signed char var_2 = (signed char)-77;
signed char var_5 = (signed char)-100;
signed char var_6 = (signed char)-51;
int var_7 = 102361844;
unsigned char var_8 = (unsigned char)58;
unsigned long long int var_9 = 1235461764425982142ULL;
unsigned int var_10 = 524453502U;
_Bool var_11 = (_Bool)0;
unsigned short var_13 = (unsigned short)2184;
int var_14 = 203219854;
int var_15 = -1861422696;
int zero = 0;
signed char var_16 = (signed char)112;
signed char var_17 = (signed char)-78;
long long int var_18 = -6883025273760636314LL;
unsigned int var_19 = 3183515639U;
unsigned int var_20 = 2062221653U;
unsigned int var_21 = 3393630917U;
unsigned int var_22 = 2646013494U;
unsigned long long int var_23 = 13001363933303084021ULL;
signed char var_24 = (signed char)-64;
long long int var_25 = 6563566886537698404LL;
unsigned long long int var_26 = 8877235831872091332ULL;
unsigned long long int var_27 = 16927302566305319238ULL;
unsigned char arr_1 [22] ;
signed char arr_2 [22] ;
long long int arr_3 [22] ;
unsigned long long int arr_6 [22] ;
unsigned long long int arr_10 [22] [22] [22] ;
unsigned long long int arr_13 [22] ;
signed char arr_14 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned char)169;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (signed char)-59;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = -7098527867439726262LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = 17537680873378875779ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 11993482943784059385ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_13 [i_0] = 17441676334358095953ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_14 [i_0] = (signed char)103;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
