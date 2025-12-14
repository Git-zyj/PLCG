#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_1 = (signed char)-14;
signed char var_3 = (signed char)122;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)0;
signed char var_10 = (signed char)109;
short var_11 = (short)4054;
int zero = 0;
unsigned int var_14 = 2104337218U;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)115;
signed char var_17 = (signed char)37;
long long int var_18 = 6521401965934687958LL;
unsigned char var_19 = (unsigned char)168;
unsigned short var_20 = (unsigned short)41581;
unsigned char var_21 = (unsigned char)238;
_Bool arr_0 [25] [25] ;
long long int arr_1 [25] ;
long long int arr_6 [14] [14] ;
short arr_7 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = -8512185113288350721LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? -3715873973342401842LL : 8974687752883532603LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (short)-27892 : (short)21941;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
