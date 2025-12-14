#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5331947735591093763LL;
unsigned long long int var_5 = 5352002517557384649ULL;
unsigned short var_6 = (unsigned short)44894;
long long int var_7 = -3134940376272773549LL;
short var_12 = (short)13149;
long long int var_14 = 7763256712541193357LL;
int zero = 0;
short var_15 = (short)4810;
unsigned char var_16 = (unsigned char)39;
unsigned int var_17 = 2535367397U;
_Bool arr_0 [24] ;
long long int arr_1 [24] ;
_Bool arr_2 [24] ;
long long int arr_3 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = -1981319622753582882LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 2666295010310453267LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
