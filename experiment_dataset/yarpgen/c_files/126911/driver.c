#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12159374334093275833ULL;
unsigned char var_5 = (unsigned char)13;
unsigned short var_6 = (unsigned short)27297;
unsigned long long int var_7 = 13648157452581505534ULL;
unsigned short var_8 = (unsigned short)25985;
unsigned int var_9 = 908528761U;
unsigned short var_11 = (unsigned short)61606;
signed char var_14 = (signed char)76;
int zero = 0;
short var_15 = (short)-16283;
int var_16 = -115296916;
unsigned short var_17 = (unsigned short)36688;
unsigned long long int var_18 = 10941795289285292900ULL;
short var_19 = (short)7285;
unsigned char arr_0 [22] ;
unsigned int arr_1 [22] ;
unsigned long long int arr_6 [22] ;
short arr_2 [22] ;
unsigned int arr_3 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned char)228 : (unsigned char)205;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 3763790981U : 1073810823U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = 9743980801016381019ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)31505 : (short)-3414;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 2713641115U : 3146042332U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
