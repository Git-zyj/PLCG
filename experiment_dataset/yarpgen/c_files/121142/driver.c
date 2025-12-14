#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -616081058;
long long int var_10 = 1874325510247779920LL;
short var_11 = (short)10734;
unsigned short var_12 = (unsigned short)18385;
long long int var_14 = -3744968062413866901LL;
unsigned short var_15 = (unsigned short)16175;
long long int var_18 = 8389621090257441727LL;
int zero = 0;
signed char var_20 = (signed char)27;
unsigned short var_21 = (unsigned short)32490;
long long int var_22 = -5113993271396488699LL;
int var_23 = 1618597951;
short var_24 = (short)23698;
long long int var_25 = -3680935060522164059LL;
signed char var_26 = (signed char)106;
unsigned long long int var_27 = 11054857157722319160ULL;
long long int var_28 = 1795029153733983188LL;
short var_29 = (short)11263;
short arr_0 [16] ;
unsigned long long int arr_2 [16] ;
unsigned short arr_4 [16] ;
short arr_5 [16] ;
long long int arr_6 [18] ;
unsigned int arr_8 [18] [18] ;
unsigned long long int arr_11 [21] ;
unsigned short arr_13 [21] ;
long long int arr_14 [21] [21] ;
unsigned long long int arr_9 [18] ;
long long int arr_10 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (short)15124;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 4318601324848155916ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (unsigned short)58790;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (short)13469;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? -186663599758648275LL : 2504673948963710194LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? 972039616U : 2240483555U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_11 [i_0] = 5752502397553642808ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (unsigned short)5039 : (unsigned short)9848;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_14 [i_0] [i_1] = (i_0 % 2 == 0) ? -8208754191790184055LL : -1178440268805518789LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 3807572984162513780ULL : 9138808671643138168ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 1200068079730347462LL : 633640692760279043LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
