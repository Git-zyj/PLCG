#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7347415603459976563LL;
int var_1 = -712665375;
long long int var_2 = 5251852444914167193LL;
long long int var_3 = -6766786398416537778LL;
unsigned char var_5 = (unsigned char)103;
unsigned long long int var_6 = 3323399558344082477ULL;
signed char var_7 = (signed char)-103;
unsigned int var_8 = 3592480950U;
signed char var_11 = (signed char)-33;
int zero = 0;
int var_14 = -23421102;
short var_15 = (short)-22059;
short var_16 = (short)-21940;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 1561487415U;
long long int var_19 = 5329789375770817303LL;
unsigned short var_20 = (unsigned short)24874;
long long int var_21 = 4768694255381847347LL;
unsigned short var_22 = (unsigned short)65195;
signed char var_23 = (signed char)-92;
long long int var_24 = -5583322386952884410LL;
signed char var_25 = (signed char)-20;
long long int var_26 = 6854543320758373948LL;
short var_27 = (short)-27055;
long long int var_28 = -5183602785700223951LL;
_Bool var_29 = (_Bool)1;
unsigned char var_30 = (unsigned char)0;
unsigned int var_31 = 1651144885U;
unsigned int arr_0 [15] ;
long long int arr_2 [15] ;
unsigned short arr_4 [15] [15] [15] ;
int arr_8 [11] ;
unsigned short arr_9 [11] [11] ;
unsigned char arr_15 [11] [11] ;
int arr_19 [11] [11] [11] ;
unsigned short arr_23 [11] [11] [11] [11] ;
long long int arr_30 [11] [11] [11] ;
int arr_37 [25] ;
unsigned long long int arr_39 [25] [25] ;
long long int arr_40 [25] [25] ;
signed char arr_3 [15] [15] ;
signed char arr_13 [11] ;
unsigned char arr_17 [11] ;
unsigned int arr_21 [11] [11] [11] [11] ;
unsigned short arr_44 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 2381235553U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 745989226063717631LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)37987;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = -425241161;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)39742;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_15 [i_0] [i_1] = (unsigned char)220;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 750366626 : -522476721;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = (unsigned short)37933;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 3491703090596571040LL : 5725089443562009839LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_37 [i_0] = 685068852;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_39 [i_0] [i_1] = 16421629610270077771ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_40 [i_0] [i_1] = 4739952674149283830LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)53;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (signed char)-121 : (signed char)102;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (unsigned char)245 : (unsigned char)24;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 346606082U : 3152352992U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_44 [i_0] = (unsigned short)63834;
}

void checksum() {
    hash(&seed, var_14);
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    hash(&seed, arr_21 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_44 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
