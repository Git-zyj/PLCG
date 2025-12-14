#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6377066392191229732LL;
unsigned short var_8 = (unsigned short)36745;
unsigned int var_10 = 3987403848U;
signed char var_13 = (signed char)83;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 2348874732890560547ULL;
signed char var_17 = (signed char)43;
unsigned char var_18 = (unsigned char)180;
int var_19 = -1854114693;
long long int var_20 = 6428227612320786657LL;
long long int arr_0 [20] ;
int arr_1 [20] ;
unsigned short arr_3 [15] [15] ;
_Bool arr_2 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 5836681885061209622LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 646853397;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)63470;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
