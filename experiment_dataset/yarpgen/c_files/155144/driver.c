#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3952478628U;
unsigned int var_3 = 152034822U;
unsigned int var_4 = 212048267U;
unsigned int var_7 = 732050862U;
unsigned short var_10 = (unsigned short)31416;
unsigned short var_13 = (unsigned short)38681;
unsigned int var_16 = 3444397997U;
unsigned short var_19 = (unsigned short)32863;
int zero = 0;
unsigned int var_20 = 3176889613U;
unsigned short var_21 = (unsigned short)36590;
unsigned int var_22 = 1736986103U;
unsigned short var_23 = (unsigned short)57752;
unsigned int var_24 = 3332057910U;
unsigned int var_25 = 4170621747U;
unsigned short var_26 = (unsigned short)321;
unsigned int var_27 = 2061234677U;
unsigned short var_28 = (unsigned short)38253;
unsigned int var_29 = 1588099492U;
unsigned int arr_0 [20] ;
unsigned short arr_1 [20] ;
unsigned short arr_2 [24] [24] ;
unsigned int arr_3 [24] [24] ;
unsigned int arr_4 [24] [24] ;
unsigned short arr_5 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 2191868914U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (unsigned short)25125;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)32769;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = 917159177U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = 98511411U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (unsigned short)10631;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
