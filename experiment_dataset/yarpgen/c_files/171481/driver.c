#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)41;
unsigned short var_3 = (unsigned short)53110;
_Bool var_8 = (_Bool)1;
signed char var_11 = (signed char)-104;
int zero = 0;
unsigned int var_12 = 4064662006U;
unsigned int var_13 = 2025522033U;
unsigned char var_14 = (unsigned char)123;
unsigned int var_15 = 2092154849U;
short var_16 = (short)17040;
_Bool arr_5 [12] [12] [12] ;
unsigned short arr_6 [12] ;
unsigned int arr_7 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned short)2801 : (unsigned short)51229;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = 3642266440U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
