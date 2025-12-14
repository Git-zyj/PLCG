#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1063447356;
int var_4 = 1410846377;
long long int var_8 = -7552545844536240040LL;
unsigned short var_9 = (unsigned short)45584;
int var_11 = -736279196;
short var_12 = (short)28713;
int var_13 = -1740281328;
unsigned long long int var_14 = 12097085629023379353ULL;
long long int var_15 = 3362998794773607356LL;
long long int var_16 = 2375443713184067735LL;
int zero = 0;
long long int var_17 = 7500352265626745249LL;
unsigned char var_18 = (unsigned char)244;
signed char var_19 = (signed char)116;
unsigned short var_20 = (unsigned short)38938;
unsigned short var_21 = (unsigned short)4672;
unsigned int arr_0 [14] [14] ;
short arr_1 [14] ;
unsigned long long int arr_2 [14] ;
_Bool arr_3 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? 484826376U : 3579198493U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (short)1866;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 1156502529565790266ULL : 5534451655855070173ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
