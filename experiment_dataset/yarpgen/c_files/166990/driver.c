#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4171419406357782156LL;
short var_3 = (short)-10585;
unsigned long long int var_5 = 10128876222448470052ULL;
unsigned long long int var_6 = 14081882848592438339ULL;
unsigned int var_8 = 3105808034U;
unsigned char var_12 = (unsigned char)235;
signed char var_13 = (signed char)-122;
signed char var_14 = (signed char)27;
int zero = 0;
_Bool var_16 = (_Bool)1;
short var_17 = (short)21311;
long long int arr_0 [21] ;
int arr_1 [21] ;
long long int arr_4 [19] ;
signed char arr_5 [19] [19] ;
long long int arr_2 [21] ;
long long int arr_6 [19] ;
int arr_7 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = -1179461357637279001LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 274185016 : 1168903839;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = -1519390312667376128LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)101;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -6655289229140510575LL : -7175898722186735956LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = -8530706037795663761LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = 1833113512;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
