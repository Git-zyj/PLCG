#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)2871;
unsigned int var_2 = 1205855850U;
_Bool var_4 = (_Bool)1;
int var_6 = -827018388;
unsigned char var_7 = (unsigned char)224;
long long int var_8 = 5951902041198993896LL;
unsigned char var_9 = (unsigned char)242;
unsigned short var_12 = (unsigned short)26770;
signed char var_13 = (signed char)54;
unsigned long long int var_14 = 13057249234333926896ULL;
int zero = 0;
unsigned long long int var_15 = 13399231767716846416ULL;
unsigned long long int var_16 = 1415107572644385743ULL;
unsigned char var_17 = (unsigned char)254;
long long int var_18 = -4982143045822861130LL;
long long int var_19 = -8890688792428656533LL;
signed char var_20 = (signed char)7;
int var_21 = 1117979461;
unsigned long long int var_22 = 10982140606127057442ULL;
unsigned int var_23 = 4225545456U;
unsigned short var_24 = (unsigned short)48456;
signed char var_25 = (signed char)25;
_Bool arr_3 [16] [16] ;
long long int arr_7 [23] ;
unsigned long long int arr_16 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = -7413335001403270710LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_16 [i_0] [i_1] = 7966584794960721736ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
