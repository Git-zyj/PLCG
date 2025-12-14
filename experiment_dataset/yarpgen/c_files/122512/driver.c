#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_1 = (signed char)114;
int var_2 = 1406785915;
signed char var_4 = (signed char)21;
signed char var_7 = (signed char)106;
unsigned int var_8 = 3335407272U;
int var_10 = 1779092943;
unsigned char var_11 = (unsigned char)249;
unsigned short var_12 = (unsigned short)51191;
unsigned int var_13 = 504760719U;
int var_14 = 697766208;
int var_16 = -1805721542;
int zero = 0;
signed char var_17 = (signed char)-52;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)22;
unsigned short var_20 = (unsigned short)20288;
unsigned long long int var_21 = 8108165297195699899ULL;
short var_22 = (short)-4388;
long long int var_23 = 7355923307621224266LL;
long long int var_24 = -6429161062435607182LL;
unsigned int var_25 = 2368418026U;
unsigned long long int var_26 = 2118175601853354547ULL;
signed char arr_0 [21] ;
unsigned short arr_1 [21] [21] ;
_Bool arr_2 [21] ;
unsigned int arr_3 [21] [21] ;
unsigned short arr_4 [21] [21] [21] ;
int arr_5 [21] [21] ;
short arr_6 [21] ;
signed char arr_7 [21] [21] [21] ;
unsigned char arr_8 [16] ;
unsigned char arr_9 [16] ;
short arr_10 [16] [16] ;
short arr_12 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (signed char)-119;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)58705;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = 3081335676U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)5005;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = -1591345818;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (short)-16259;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (signed char)117;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = (unsigned char)48;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = (unsigned char)2;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_10 [i_0] [i_1] = (short)1582;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_12 [i_0] = (short)-19503;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
