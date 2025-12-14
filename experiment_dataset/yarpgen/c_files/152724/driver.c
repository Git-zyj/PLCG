#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 515196660;
unsigned char var_3 = (unsigned char)242;
int var_5 = -1508887070;
int var_6 = -1434035838;
unsigned char var_8 = (unsigned char)213;
unsigned short var_9 = (unsigned short)10633;
long long int var_11 = -6079815286591926441LL;
int zero = 0;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)108;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)196;
short var_19 = (short)-10858;
unsigned char var_20 = (unsigned char)7;
unsigned short arr_0 [23] ;
short arr_1 [23] [23] ;
unsigned char arr_3 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (unsigned short)63274;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-11662;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (unsigned char)177;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
