#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 735074599U;
long long int var_2 = 6197921515432198426LL;
short var_4 = (short)-20123;
int var_5 = -1567234212;
unsigned long long int var_6 = 8668401384362343854ULL;
long long int var_7 = -1849255482584259253LL;
short var_8 = (short)12463;
unsigned long long int var_10 = 16581277767794965573ULL;
unsigned int var_11 = 3629533857U;
long long int var_12 = 4325988532870899049LL;
unsigned int var_15 = 200599323U;
long long int var_16 = 7844280042004834197LL;
unsigned long long int var_17 = 17820243923405460426ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)200;
long long int var_20 = -7967970479897016402LL;
short var_21 = (short)16252;
unsigned int var_22 = 3839892816U;
unsigned char var_23 = (unsigned char)168;
_Bool var_24 = (_Bool)1;
unsigned short var_25 = (unsigned short)48023;
unsigned long long int var_26 = 13987593808322529696ULL;
unsigned int var_27 = 782911048U;
short arr_3 [20] [20] ;
unsigned int arr_6 [25] ;
unsigned int arr_7 [25] ;
unsigned int arr_9 [25] [25] ;
int arr_10 [25] [25] [25] ;
long long int arr_12 [25] [25] [25] [25] ;
_Bool arr_5 [20] ;
unsigned short arr_8 [25] [25] ;
unsigned short arr_14 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-10744 : (short)29116;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = 2177811551U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 3292680781U : 846233823U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_9 [i_0] [i_1] = 13999775U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = -849140186;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = -7485128136105193503LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)42067 : (unsigned short)62509;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_14 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)32105 : (unsigned short)50117;
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
