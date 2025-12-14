#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_1 = -6666383012854847274LL;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 3098927868U;
unsigned int var_6 = 3573630763U;
unsigned char var_7 = (unsigned char)122;
unsigned char var_9 = (unsigned char)18;
unsigned long long int var_10 = 14449505389088088463ULL;
long long int var_12 = 1276817527597633180LL;
short var_13 = (short)9652;
short var_14 = (short)11248;
_Bool var_16 = (_Bool)0;
int zero = 0;
long long int var_17 = -5072719572455952761LL;
unsigned short var_18 = (unsigned short)23803;
long long int var_19 = -9116026393063522808LL;
long long int arr_0 [19] ;
unsigned char arr_1 [19] ;
long long int arr_2 [19] ;
int arr_3 [19] [19] [19] ;
unsigned short arr_4 [19] [19] [19] ;
short arr_5 [19] ;
unsigned long long int arr_6 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 6899399078868680107LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned char)78;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = -5485062817717988143LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 238379061;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)34352;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (short)-5953 : (short)-1196;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 3091695517504647867ULL : 6286237331579397059ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
