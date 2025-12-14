#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-10058;
_Bool var_1 = (_Bool)1;
int var_3 = 1353903452;
long long int var_9 = 7973769616447134246LL;
int zero = 0;
unsigned long long int var_10 = 2656882008993435741ULL;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 5068811514235418689ULL;
unsigned long long int var_13 = 8730199984344637954ULL;
unsigned short var_14 = (unsigned short)13503;
unsigned int var_15 = 4263516808U;
_Bool arr_0 [19] ;
long long int arr_1 [19] ;
int arr_2 [19] ;
short arr_3 [19] ;
unsigned int arr_4 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = -5101275770882512158LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 2033994340;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (short)-22603;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = 668689584U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
