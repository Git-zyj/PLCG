#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)188;
int var_2 = -1118118707;
unsigned long long int var_3 = 12933799889870878152ULL;
short var_4 = (short)-22121;
unsigned long long int var_5 = 7622685330171571284ULL;
unsigned char var_6 = (unsigned char)150;
signed char var_7 = (signed char)7;
unsigned short var_8 = (unsigned short)5346;
signed char var_10 = (signed char)109;
unsigned short var_11 = (unsigned short)35722;
short var_12 = (short)-27280;
unsigned int var_13 = 3222095024U;
int zero = 0;
long long int var_14 = -7483202308362070454LL;
unsigned short var_15 = (unsigned short)45790;
long long int var_16 = 434950844904573542LL;
unsigned int var_17 = 1951708670U;
int var_18 = -265310029;
unsigned int var_19 = 1654616260U;
unsigned long long int arr_2 [19] [19] ;
short arr_3 [19] [19] [19] ;
int arr_4 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = 12729834946818754325ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)2801 : (short)-27049;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 1247892399 : 1382564645;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
