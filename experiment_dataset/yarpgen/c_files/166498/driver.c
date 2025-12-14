#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)2249;
_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)54861;
unsigned char var_3 = (unsigned char)177;
unsigned char var_7 = (unsigned char)196;
long long int var_9 = -3214435228784509103LL;
int zero = 0;
unsigned char var_10 = (unsigned char)9;
unsigned short var_11 = (unsigned short)8658;
short var_12 = (short)-24993;
unsigned short var_13 = (unsigned short)47682;
unsigned int var_14 = 487854754U;
unsigned long long int var_15 = 13194552374746091205ULL;
short var_16 = (short)1947;
long long int var_17 = -926878893039248691LL;
long long int var_18 = 3484423884280079633LL;
unsigned int arr_0 [19] ;
short arr_2 [19] ;
long long int arr_4 [19] [19] ;
long long int arr_9 [16] ;
unsigned short arr_3 [19] ;
unsigned short arr_8 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 4040150240U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (short)24164;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = 3494143615489851767LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = 45393561064730913LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (unsigned short)9922;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned short)60924;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
