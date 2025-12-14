#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)108;
signed char var_2 = (signed char)64;
_Bool var_3 = (_Bool)0;
_Bool var_6 = (_Bool)1;
unsigned char var_11 = (unsigned char)16;
signed char var_12 = (signed char)-85;
unsigned char var_14 = (unsigned char)182;
int zero = 0;
unsigned long long int var_16 = 7841168165299210090ULL;
int var_17 = -835461959;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)-11;
unsigned int arr_0 [15] [15] ;
unsigned char arr_4 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = 2589084336U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned char)214 : (unsigned char)100;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
