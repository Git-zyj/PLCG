#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)61;
unsigned char var_2 = (unsigned char)221;
unsigned short var_3 = (unsigned short)48693;
unsigned char var_4 = (unsigned char)105;
unsigned short var_7 = (unsigned short)37499;
unsigned int var_10 = 2560130765U;
unsigned char var_11 = (unsigned char)24;
signed char var_12 = (signed char)22;
unsigned short var_14 = (unsigned short)5374;
unsigned short var_15 = (unsigned short)41491;
signed char var_16 = (signed char)-22;
unsigned int var_17 = 4161088741U;
int var_18 = 285384098;
unsigned int var_19 = 1137154315U;
int zero = 0;
_Bool var_20 = (_Bool)0;
int var_21 = -1815744253;
int var_22 = -1153406795;
signed char var_23 = (signed char)117;
signed char arr_0 [12] [12] ;
unsigned char arr_1 [12] [12] ;
unsigned long long int arr_3 [25] [25] ;
short arr_2 [12] ;
unsigned char arr_5 [25] ;
long long int arr_6 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-116;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)172;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = 13594759147184916121ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (short)13699;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (unsigned char)131;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = -8475265939965768574LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
