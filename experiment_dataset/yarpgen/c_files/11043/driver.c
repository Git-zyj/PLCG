#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)166;
unsigned short var_6 = (unsigned short)4043;
unsigned short var_8 = (unsigned short)10673;
signed char var_9 = (signed char)-93;
unsigned short var_10 = (unsigned short)26754;
long long int var_11 = 886554682918114300LL;
unsigned short var_14 = (unsigned short)45781;
signed char var_15 = (signed char)60;
int zero = 0;
int var_17 = 143132673;
signed char var_18 = (signed char)60;
unsigned int var_19 = 1008848582U;
int arr_0 [17] ;
unsigned char arr_1 [17] ;
unsigned int arr_2 [17] ;
unsigned short arr_5 [24] ;
int arr_6 [24] ;
unsigned char arr_3 [17] ;
unsigned char arr_4 [17] ;
long long int arr_7 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? -205334300 : 1321809473;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned char)234;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 2175821111U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (unsigned short)61898;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = 1084729560;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)58 : (unsigned char)77;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned char)61 : (unsigned char)129;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = -9218263544342368077LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
