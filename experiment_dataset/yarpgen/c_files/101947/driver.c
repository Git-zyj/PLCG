#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)69;
unsigned long long int var_3 = 2723612221508644857ULL;
int var_5 = -1055887357;
short var_9 = (short)5219;
long long int var_10 = 5831921295802428283LL;
unsigned char var_12 = (unsigned char)183;
unsigned long long int var_14 = 18417303746114442032ULL;
signed char var_15 = (signed char)58;
int zero = 0;
unsigned short var_18 = (unsigned short)46378;
unsigned char var_19 = (unsigned char)59;
long long int var_20 = 2906741864563963976LL;
unsigned int var_21 = 2900162200U;
short var_22 = (short)19668;
unsigned long long int var_23 = 12362448373537248097ULL;
unsigned long long int arr_0 [21] ;
_Bool arr_1 [21] [21] ;
unsigned char arr_2 [21] ;
_Bool arr_3 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 18092997814259114384ULL : 16798221207487494622ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)116 : (unsigned char)162;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
