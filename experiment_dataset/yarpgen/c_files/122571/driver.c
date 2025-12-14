#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1252754794;
unsigned short var_1 = (unsigned short)62093;
long long int var_5 = 3398924163989432378LL;
signed char var_6 = (signed char)83;
unsigned short var_7 = (unsigned short)48215;
int var_10 = 1100580718;
int zero = 0;
short var_11 = (short)-15054;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)226;
_Bool var_14 = (_Bool)1;
int var_15 = -50161876;
unsigned char var_16 = (unsigned char)77;
int arr_0 [16] ;
_Bool arr_2 [16] ;
unsigned long long int arr_4 [17] ;
unsigned char arr_6 [17] ;
short arr_8 [17] [17] ;
unsigned long long int arr_3 [16] ;
unsigned long long int arr_7 [17] ;
unsigned char arr_12 [17] ;
long long int arr_13 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 1295990090;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = 7669615431412197592ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (unsigned char)247;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-31300 : (short)-6855;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 15570782159896116427ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 3329927112245147785ULL : 17726908163392800794ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (unsigned char)105 : (unsigned char)150;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? 2190170998582671820LL : 8450991910246449051LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
