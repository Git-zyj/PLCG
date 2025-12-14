#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-569;
_Bool var_3 = (_Bool)1;
long long int var_4 = -437501015968695388LL;
unsigned long long int var_6 = 502682002251837922ULL;
unsigned short var_8 = (unsigned short)21327;
short var_9 = (short)-20325;
unsigned short var_10 = (unsigned short)19136;
unsigned long long int var_11 = 14475997967159387730ULL;
int zero = 0;
short var_13 = (short)29853;
unsigned int var_14 = 3239259833U;
unsigned short var_15 = (unsigned short)16302;
unsigned long long int var_16 = 13707839496608227852ULL;
unsigned long long int var_17 = 16942068555474370115ULL;
unsigned int var_18 = 1017761642U;
unsigned int var_19 = 3552549577U;
unsigned long long int var_20 = 4175579742224948003ULL;
long long int var_21 = 7030143961597126213LL;
unsigned short arr_2 [16] ;
int arr_4 [24] ;
signed char arr_5 [24] [24] ;
unsigned int arr_6 [24] [24] ;
unsigned char arr_3 [16] ;
unsigned long long int arr_7 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (unsigned short)26352;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = 737159565;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)14;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = 1847271028U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (unsigned char)32;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = 2835263977382268793ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
