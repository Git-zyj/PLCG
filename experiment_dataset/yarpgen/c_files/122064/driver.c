#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)48878;
int var_1 = -1726087412;
unsigned long long int var_2 = 12104622870434759080ULL;
_Bool var_3 = (_Bool)1;
short var_4 = (short)-928;
unsigned char var_5 = (unsigned char)26;
int var_6 = 1257719526;
short var_7 = (short)-4645;
unsigned short var_8 = (unsigned short)54140;
unsigned int var_9 = 4181671244U;
unsigned long long int var_10 = 15000796807023963184ULL;
unsigned long long int var_11 = 2491899438163091665ULL;
short var_12 = (short)21686;
_Bool var_14 = (_Bool)0;
int var_15 = 1522849550;
signed char var_16 = (signed char)87;
unsigned long long int var_17 = 5777814938998758366ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)62726;
int var_20 = -720048439;
unsigned int var_21 = 3009284937U;
int var_22 = 1528955876;
signed char var_23 = (signed char)-97;
long long int var_24 = 3498907987176297444LL;
signed char var_25 = (signed char)-48;
long long int arr_0 [20] ;
unsigned short arr_1 [20] ;
unsigned short arr_5 [25] [25] ;
short arr_9 [25] [25] [25] ;
unsigned short arr_11 [25] ;
long long int arr_3 [20] ;
unsigned int arr_4 [20] [20] ;
int arr_7 [25] ;
long long int arr_8 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = -1897081221976237255LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (unsigned short)9232;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)20753;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)-19259 : (short)-3447;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (unsigned short)26907 : (unsigned short)23438;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 5615135042852008398LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = 3599659530U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = 2060953318;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_8 [i_0] [i_1] = 607726493889670874LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
