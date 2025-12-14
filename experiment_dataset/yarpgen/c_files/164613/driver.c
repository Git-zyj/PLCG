#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)193;
unsigned int var_3 = 3396061853U;
unsigned int var_4 = 101221067U;
unsigned long long int var_5 = 16546047986687883661ULL;
int var_7 = 997485745;
unsigned char var_8 = (unsigned char)92;
unsigned long long int var_9 = 13370620787659719598ULL;
int zero = 0;
long long int var_12 = -4634836307218872609LL;
unsigned char var_13 = (unsigned char)53;
int var_14 = -1001907106;
int var_15 = -884058516;
int var_16 = -654700037;
signed char arr_2 [17] ;
long long int arr_4 [17] ;
long long int arr_7 [17] ;
_Bool arr_8 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (signed char)51;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -3896917247081707772LL : 6038891991710544385LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? -2016207977865187387LL : -6926543618660669218LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
