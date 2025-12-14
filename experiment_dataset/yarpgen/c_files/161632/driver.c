#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)165;
unsigned char var_4 = (unsigned char)151;
short var_5 = (short)14333;
long long int var_6 = 3681925390183098362LL;
long long int var_9 = -6235562271907254154LL;
unsigned short var_12 = (unsigned short)13054;
int var_13 = 982065733;
_Bool var_14 = (_Bool)0;
short var_16 = (short)16976;
unsigned char var_17 = (unsigned char)249;
int zero = 0;
signed char var_19 = (signed char)-52;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)-72;
unsigned short var_22 = (unsigned short)47428;
short var_23 = (short)-10579;
signed char var_24 = (signed char)-78;
unsigned char arr_0 [24] ;
unsigned long long int arr_1 [24] ;
long long int arr_2 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned char)139;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 1623763409939900349ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? 3471907492355364714LL : -6463213256367103639LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
