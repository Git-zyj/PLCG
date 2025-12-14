#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-9023;
unsigned short var_1 = (unsigned short)36785;
unsigned int var_2 = 4230090916U;
long long int var_3 = -6027958159642044558LL;
long long int var_5 = -7939087397517942405LL;
unsigned short var_6 = (unsigned short)2420;
unsigned short var_7 = (unsigned short)35232;
unsigned long long int var_14 = 2905731340561258066ULL;
long long int var_16 = 4264624254126841833LL;
long long int var_17 = 2000097923150141033LL;
int zero = 0;
long long int var_20 = 240607078953568896LL;
unsigned short var_21 = (unsigned short)23101;
long long int var_22 = -7942772361738245466LL;
long long int var_23 = -3885894946901044176LL;
unsigned short var_24 = (unsigned short)32901;
long long int arr_0 [25] ;
unsigned short arr_1 [25] ;
long long int arr_2 [25] [25] ;
unsigned short arr_4 [25] [25] ;
long long int arr_6 [25] [25] ;
unsigned long long int arr_7 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 311111818979217327LL : 5974987724871291234LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (unsigned short)39110;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = -4943589382352313404LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)58424;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? 5353109590232337604LL : -669297629307082843LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? 5930250167603885372ULL : 11740951607273754788ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
