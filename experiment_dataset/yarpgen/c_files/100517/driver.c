#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4203085381765665884ULL;
unsigned long long int var_2 = 17540427629240147332ULL;
unsigned short var_4 = (unsigned short)44644;
int var_6 = -1025585526;
unsigned char var_8 = (unsigned char)229;
signed char var_9 = (signed char)86;
int zero = 0;
long long int var_10 = 4262252235645517496LL;
unsigned long long int var_11 = 6634887765472097999ULL;
long long int var_12 = 4130903616781481167LL;
unsigned char var_13 = (unsigned char)164;
unsigned char var_14 = (unsigned char)112;
unsigned int var_15 = 2642347343U;
_Bool var_16 = (_Bool)1;
long long int var_17 = 4919879615081286344LL;
unsigned long long int var_18 = 10393199860941617655ULL;
unsigned int var_19 = 3306893070U;
unsigned int var_20 = 1402932100U;
long long int var_21 = 837657834647861585LL;
int var_22 = 1278431000;
short arr_0 [17] ;
_Bool arr_1 [17] [17] ;
long long int arr_2 [23] ;
unsigned long long int arr_3 [23] ;
unsigned char arr_5 [17] [17] ;
_Bool arr_6 [17] ;
signed char arr_8 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (short)12859 : (short)29142;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = -5749480395650032916LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 731355432679976096ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)53 : (unsigned char)69;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (signed char)19 : (signed char)68;
}

void checksum() {
    hash(&seed, var_10);
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
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
