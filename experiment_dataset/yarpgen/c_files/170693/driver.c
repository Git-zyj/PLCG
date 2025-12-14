#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16682881226800119576ULL;
signed char var_2 = (signed char)4;
int var_4 = 1801525240;
int var_5 = 2087427443;
unsigned short var_6 = (unsigned short)12002;
short var_10 = (short)23702;
int zero = 0;
unsigned char var_17 = (unsigned char)164;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)18;
unsigned char var_20 = (unsigned char)26;
unsigned char var_21 = (unsigned char)249;
unsigned int var_22 = 2330263407U;
unsigned char var_23 = (unsigned char)74;
signed char var_24 = (signed char)-35;
_Bool var_25 = (_Bool)0;
unsigned int var_26 = 165758142U;
short var_27 = (short)-26791;
unsigned char var_28 = (unsigned char)74;
unsigned char arr_0 [21] ;
unsigned int arr_4 [22] ;
unsigned long long int arr_5 [22] ;
_Bool arr_8 [22] [22] [22] ;
unsigned char arr_6 [22] [22] ;
int arr_11 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (unsigned char)72;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = 1183905918U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = 3920926571268359573ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)103;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1688332760 : -1833430048;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
