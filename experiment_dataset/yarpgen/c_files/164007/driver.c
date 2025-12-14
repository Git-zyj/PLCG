#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)8278;
unsigned long long int var_2 = 6807498607205745548ULL;
long long int var_5 = 1275197380073226178LL;
signed char var_6 = (signed char)-52;
unsigned short var_8 = (unsigned short)40741;
short var_9 = (short)16971;
_Bool var_12 = (_Bool)1;
short var_14 = (short)-27986;
int zero = 0;
unsigned short var_15 = (unsigned short)8261;
unsigned short var_16 = (unsigned short)43337;
short var_17 = (short)-19284;
long long int var_18 = 4498194710814388529LL;
unsigned char var_19 = (unsigned char)213;
signed char var_20 = (signed char)21;
long long int var_21 = -522327487119949509LL;
_Bool var_22 = (_Bool)1;
unsigned short var_23 = (unsigned short)62125;
short arr_1 [15] ;
signed char arr_3 [15] ;
unsigned short arr_4 [15] [15] ;
long long int arr_5 [15] ;
unsigned char arr_6 [15] [15] ;
long long int arr_9 [14] [14] ;
short arr_8 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (short)30683;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (signed char)-122;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)11951;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = -4066520607290536034LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)244;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_9 [i_0] [i_1] = -3107475496404398781LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = (short)-19788;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
