#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 11393841681338898900ULL;
short var_5 = (short)18056;
unsigned char var_7 = (unsigned char)71;
unsigned short var_8 = (unsigned short)52471;
unsigned int var_11 = 2594893831U;
int var_15 = 539406346;
int zero = 0;
_Bool var_16 = (_Bool)1;
short var_17 = (short)-18047;
signed char var_18 = (signed char)79;
unsigned char var_19 = (unsigned char)73;
unsigned char var_20 = (unsigned char)31;
signed char arr_0 [13] ;
signed char arr_1 [13] ;
unsigned long long int arr_2 [13] [13] ;
long long int arr_3 [13] [13] ;
short arr_4 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (signed char)-126;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (signed char)-113;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = 5080871425045541594ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? 1004896786990199707LL : 7420473938933697158LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (short)8856 : (short)17157;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
