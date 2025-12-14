#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)4068;
unsigned char var_10 = (unsigned char)231;
unsigned int var_11 = 1079991048U;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned short var_16 = (unsigned short)58732;
int var_17 = -1700409826;
int var_18 = -305613266;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)185;
unsigned char var_21 = (unsigned char)237;
int var_22 = -1369569149;
short var_23 = (short)24144;
unsigned short var_24 = (unsigned short)9208;
unsigned short var_25 = (unsigned short)18163;
signed char arr_0 [11] ;
unsigned char arr_2 [12] ;
signed char arr_3 [12] ;
short arr_4 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (signed char)11;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (unsigned char)125;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (signed char)-127;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-16248;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
