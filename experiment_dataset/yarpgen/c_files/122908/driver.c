#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -787598475;
unsigned long long int var_7 = 3131264671169562025ULL;
int var_8 = 941989129;
unsigned char var_9 = (unsigned char)188;
signed char var_14 = (signed char)77;
int zero = 0;
signed char var_15 = (signed char)26;
long long int var_16 = -4354049737617734223LL;
signed char var_17 = (signed char)-88;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)32;
unsigned char arr_1 [19] ;
unsigned char arr_2 [19] [19] ;
long long int arr_10 [22] ;
unsigned int arr_4 [19] ;
unsigned short arr_11 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned char)106;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)79;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = -793363007128432991LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = 3406523421U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = (unsigned short)53201;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
