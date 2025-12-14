#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-17;
unsigned short var_4 = (unsigned short)14122;
unsigned long long int var_6 = 1920048934908478196ULL;
signed char var_9 = (signed char)-1;
_Bool var_10 = (_Bool)0;
int zero = 0;
long long int var_12 = 2496821067432954118LL;
signed char var_13 = (signed char)-61;
unsigned char var_14 = (unsigned char)206;
unsigned short var_15 = (unsigned short)25213;
_Bool var_16 = (_Bool)1;
short var_17 = (short)10912;
long long int arr_1 [16] [16] ;
unsigned long long int arr_2 [16] [16] ;
_Bool arr_3 [16] ;
unsigned int arr_4 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = -4713210537634072606LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = 17060948104468182839ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 2349667030U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
