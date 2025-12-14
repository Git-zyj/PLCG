#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)32568;
_Bool var_2 = (_Bool)1;
unsigned long long int var_5 = 15007581735345061554ULL;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 6593636298810119335ULL;
unsigned long long int var_11 = 4626209591943834645ULL;
int zero = 0;
short var_17 = (short)-32064;
int var_18 = -1272252127;
unsigned short var_19 = (unsigned short)40300;
unsigned long long int arr_0 [14] ;
unsigned long long int arr_9 [16] ;
short arr_3 [14] [14] ;
unsigned long long int arr_10 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 13959629320376781629ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = 15291545921331980718ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-26467;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = 5126626374585661759ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
