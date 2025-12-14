#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)127;
unsigned long long int var_4 = 43495432336062420ULL;
unsigned int var_8 = 4159601902U;
long long int var_9 = -6896155891441241734LL;
unsigned char var_12 = (unsigned char)208;
unsigned char var_14 = (unsigned char)105;
unsigned short var_16 = (unsigned short)15081;
unsigned int var_17 = 468322895U;
signed char var_19 = (signed char)-106;
int zero = 0;
int var_20 = -1172351225;
int var_21 = 802017337;
unsigned short var_22 = (unsigned short)14186;
unsigned short var_23 = (unsigned short)16891;
short var_24 = (short)21512;
unsigned long long int arr_3 [10] ;
long long int arr_4 [10] ;
int arr_7 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 7186993545348991160ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = 3562782166531158775LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = 1309471955;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
