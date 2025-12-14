#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5885936204001345816LL;
short var_1 = (short)-17774;
short var_2 = (short)24815;
unsigned long long int var_3 = 9027316902552920059ULL;
unsigned int var_4 = 3846179046U;
unsigned int var_5 = 139037777U;
unsigned short var_6 = (unsigned short)27261;
long long int var_7 = 8772544098442417457LL;
unsigned long long int var_8 = 17668426299352100399ULL;
short var_9 = (short)-25564;
unsigned int var_10 = 300436788U;
unsigned int var_11 = 1655656938U;
int zero = 0;
int var_12 = 1589604412;
unsigned long long int var_13 = 17423164052474802980ULL;
unsigned int var_14 = 4176254887U;
long long int var_15 = -1052530257343444788LL;
unsigned int arr_0 [13] ;
_Bool arr_1 [13] ;
int arr_2 [13] ;
int arr_3 [13] ;
unsigned int arr_4 [13] ;
unsigned int arr_5 [13] ;
short arr_6 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 4170424052U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = -635733177;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 718826890;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = 1596761400U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = 87645501U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (short)-4752;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
