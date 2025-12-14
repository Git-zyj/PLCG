#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)5696;
unsigned int var_2 = 3427325573U;
unsigned char var_3 = (unsigned char)180;
short var_4 = (short)-32704;
unsigned int var_7 = 1055467328U;
unsigned char var_10 = (unsigned char)67;
short var_12 = (short)12851;
short var_14 = (short)-20872;
unsigned char var_15 = (unsigned char)114;
unsigned char var_16 = (unsigned char)96;
int zero = 0;
signed char var_17 = (signed char)123;
unsigned char var_18 = (unsigned char)203;
unsigned char var_19 = (unsigned char)210;
unsigned char var_20 = (unsigned char)38;
unsigned long long int var_21 = 14042774923702268690ULL;
signed char var_22 = (signed char)52;
signed char var_23 = (signed char)107;
unsigned char var_24 = (unsigned char)135;
long long int arr_0 [17] [17] ;
short arr_1 [17] [17] ;
unsigned int arr_2 [17] [17] ;
long long int arr_3 [17] [17] [17] ;
signed char arr_5 [17] ;
unsigned int arr_6 [17] ;
unsigned int arr_7 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = -8175689472512232376LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (short)28755;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = 2583383007U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 4179475065682493670LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (signed char)10;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = 2336470808U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_7 [i_0] [i_1] = 330615538U;
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
