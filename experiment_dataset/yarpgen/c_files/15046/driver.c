#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)52546;
_Bool var_5 = (_Bool)1;
_Bool var_8 = (_Bool)0;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 1453658572006530336ULL;
unsigned short var_13 = (unsigned short)28469;
unsigned short var_14 = (unsigned short)9098;
int var_15 = -573065713;
int var_16 = 1918650759;
int arr_0 [11] ;
long long int arr_1 [11] ;
unsigned long long int arr_2 [11] ;
unsigned short arr_5 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = -828646348;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 1596708978346690924LL : -6162839793638376257LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 14538665851255434270ULL : 14539641028244639395ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (unsigned short)17066;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
