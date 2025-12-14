#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1069807591U;
unsigned int var_1 = 3180044376U;
long long int var_3 = -5406491396159783399LL;
unsigned char var_4 = (unsigned char)237;
unsigned int var_5 = 2298969436U;
unsigned char var_7 = (unsigned char)98;
long long int var_8 = -2007863962915707030LL;
int var_9 = -1135304772;
long long int var_10 = -1569330551988017692LL;
unsigned char var_11 = (unsigned char)173;
long long int var_14 = 1141654769206069580LL;
signed char var_15 = (signed char)-26;
signed char var_16 = (signed char)108;
int zero = 0;
signed char var_17 = (signed char)-91;
long long int var_18 = -7091023928958506226LL;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)133;
short var_21 = (short)5199;
short var_22 = (short)26108;
_Bool var_23 = (_Bool)0;
unsigned int var_24 = 1118264736U;
unsigned short arr_0 [25] ;
short arr_2 [25] ;
signed char arr_3 [25] ;
unsigned long long int arr_4 [25] ;
int arr_7 [25] ;
long long int arr_10 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned short)30564;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (short)-19080;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (signed char)-51;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = 17355701838250021887ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? -1753288463 : -2026635727;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_10 [i_0] = 978345261717527273LL;
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
