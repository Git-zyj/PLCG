#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)23870;
_Bool var_1 = (_Bool)0;
long long int var_3 = 4090549164683515568LL;
signed char var_4 = (signed char)120;
short var_5 = (short)20402;
unsigned short var_6 = (unsigned short)60882;
short var_7 = (short)-10625;
long long int var_8 = 1493905282237758963LL;
unsigned char var_9 = (unsigned char)116;
unsigned short var_10 = (unsigned short)12891;
unsigned long long int var_11 = 6892273842254574066ULL;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)105;
short var_15 = (short)17117;
short var_16 = (short)-27718;
signed char var_17 = (signed char)65;
long long int var_18 = -1371481776318132056LL;
int zero = 0;
signed char var_19 = (signed char)17;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 7205057485797573578ULL;
short var_22 = (short)-2875;
_Bool var_23 = (_Bool)1;
short var_24 = (short)-4833;
_Bool var_25 = (_Bool)1;
signed char var_26 = (signed char)12;
unsigned long long int var_27 = 5616737520307206585ULL;
_Bool var_28 = (_Bool)1;
unsigned char var_29 = (unsigned char)254;
unsigned long long int var_30 = 11561916945196704844ULL;
long long int var_31 = 924411838308954682LL;
short arr_0 [21] ;
unsigned short arr_1 [21] ;
unsigned char arr_2 [21] [21] ;
short arr_3 [21] [21] ;
_Bool arr_6 [21] ;
long long int arr_7 [21] ;
unsigned char arr_9 [17] ;
unsigned long long int arr_10 [17] ;
short arr_12 [17] ;
_Bool arr_14 [17] ;
_Bool arr_17 [17] [17] [17] ;
long long int arr_19 [17] ;
unsigned int arr_4 [21] [21] ;
unsigned char arr_8 [21] [21] [21] ;
_Bool arr_20 [17] ;
unsigned long long int arr_24 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (short)-25717;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned short)35548;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)229;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-31331;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = -805263196215730964LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = (unsigned char)34;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 9012119065462374241ULL : 16492715550600106772ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (short)-10112 : (short)-1326;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_19 [i_0] = 2470289905570111154LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = 3689767626U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned char)170;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_24 [i_0] = 5070772089519709363ULL;
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_24 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
