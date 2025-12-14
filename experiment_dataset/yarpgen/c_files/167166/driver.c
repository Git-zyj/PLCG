#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)166;
unsigned long long int var_2 = 16248679612942858246ULL;
unsigned char var_4 = (unsigned char)88;
long long int var_7 = 3874772399410616840LL;
signed char var_8 = (signed char)-51;
int var_9 = 320535353;
unsigned char var_10 = (unsigned char)91;
unsigned long long int var_12 = 11054752182973788852ULL;
unsigned long long int var_15 = 18355848752917384281ULL;
unsigned int var_16 = 2297696964U;
int zero = 0;
unsigned char var_17 = (unsigned char)50;
unsigned long long int var_18 = 8320498299232890131ULL;
signed char var_19 = (signed char)38;
unsigned int var_20 = 2756038582U;
_Bool var_21 = (_Bool)0;
long long int arr_1 [15] [15] ;
unsigned char arr_2 [15] [15] ;
_Bool arr_4 [15] [15] [15] ;
signed char arr_7 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = -8615650772595696542LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)191;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (signed char)21;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
