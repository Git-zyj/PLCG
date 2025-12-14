#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 17263600228434557753ULL;
short var_5 = (short)-18324;
unsigned long long int var_6 = 18267064543512314915ULL;
signed char var_7 = (signed char)-44;
unsigned char var_8 = (unsigned char)158;
int var_9 = 156648936;
unsigned long long int var_10 = 3872799715220046487ULL;
signed char var_11 = (signed char)28;
int zero = 0;
unsigned long long int var_14 = 16661542430027023047ULL;
unsigned int var_15 = 3848044288U;
unsigned long long int var_16 = 14246163152111685746ULL;
int var_17 = 279705013;
signed char var_18 = (signed char)101;
long long int arr_0 [25] ;
unsigned short arr_2 [25] [25] ;
short arr_3 [25] [25] [25] ;
signed char arr_4 [25] ;
short arr_5 [25] [25] ;
unsigned long long int arr_6 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = -4175649834497813801LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)59155;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)15022 : (short)-6285;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (signed char)74 : (signed char)120;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)5904 : (short)-16680;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 13663109242382667593ULL : 2454086935120881595ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
