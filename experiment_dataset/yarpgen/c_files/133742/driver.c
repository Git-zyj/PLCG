#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 1961955772U;
long long int var_8 = -4212171090761965701LL;
unsigned long long int var_11 = 13311735682584336733ULL;
int var_13 = -388230477;
unsigned int var_14 = 4263924038U;
unsigned long long int var_15 = 5015985795506822570ULL;
int zero = 0;
unsigned long long int var_19 = 8923923056598062640ULL;
unsigned short var_20 = (unsigned short)30982;
unsigned char var_21 = (unsigned char)8;
int var_22 = 1495663558;
unsigned char arr_0 [24] ;
unsigned char arr_4 [24] [24] [24] ;
unsigned short arr_5 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned char)45;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)14;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (unsigned short)48316;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
