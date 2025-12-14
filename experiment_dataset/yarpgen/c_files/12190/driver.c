#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -6669794483294438728LL;
unsigned short var_5 = (unsigned short)29941;
unsigned char var_9 = (unsigned char)198;
short var_10 = (short)11195;
unsigned int var_13 = 2179076779U;
int var_14 = -173808059;
int zero = 0;
unsigned long long int var_17 = 3905552467645671642ULL;
unsigned char var_18 = (unsigned char)182;
unsigned char var_19 = (unsigned char)163;
unsigned long long int var_20 = 13826892715036229096ULL;
unsigned int arr_0 [19] ;
short arr_2 [19] ;
unsigned long long int arr_3 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 3281530291U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)-25396 : (short)-20460;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 17997918017563471147ULL : 14808042708227100493ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
