#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-18199;
long long int var_2 = -5049617575086359012LL;
short var_3 = (short)8367;
short var_4 = (short)-18436;
signed char var_5 = (signed char)79;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)69;
signed char var_8 = (signed char)107;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)232;
int zero = 0;
short var_12 = (short)-27382;
long long int var_13 = -1143549589149011221LL;
unsigned short var_14 = (unsigned short)54672;
long long int var_15 = -8547080105997634198LL;
unsigned char var_16 = (unsigned char)167;
signed char var_17 = (signed char)-13;
signed char arr_2 [12] [12] ;
long long int arr_4 [12] [12] [12] ;
_Bool arr_5 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)114;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -2021498801837079348LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (_Bool)1;
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
