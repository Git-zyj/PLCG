#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)48;
unsigned long long int var_3 = 8912543225394333762ULL;
int var_4 = -193855112;
unsigned long long int var_5 = 4462104511202482955ULL;
int var_7 = 1318957883;
signed char var_8 = (signed char)-64;
unsigned int var_11 = 2793993920U;
signed char var_14 = (signed char)-11;
int zero = 0;
long long int var_16 = -8488180836387316916LL;
unsigned short var_17 = (unsigned short)13192;
long long int var_18 = -230720952831509209LL;
signed char arr_3 [15] [15] [15] ;
unsigned short arr_4 [15] ;
long long int arr_9 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (signed char)-107;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (unsigned short)58049;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = 5432104701875124620LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
