#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2272109203001790032LL;
unsigned short var_2 = (unsigned short)49026;
signed char var_5 = (signed char)-88;
unsigned int var_10 = 938731508U;
unsigned long long int var_11 = 11310792542781928888ULL;
unsigned int var_12 = 405381887U;
long long int var_14 = 2507388119310776021LL;
unsigned short var_16 = (unsigned short)44804;
unsigned long long int var_17 = 7808455759466009779ULL;
short var_18 = (short)-27266;
int zero = 0;
unsigned long long int var_19 = 14653078139584103794ULL;
int var_20 = 1010141152;
_Bool var_21 = (_Bool)1;
unsigned short var_22 = (unsigned short)63050;
long long int var_23 = 447722957983676417LL;
unsigned long long int var_24 = 16934781077493941365ULL;
signed char var_25 = (signed char)73;
unsigned char var_26 = (unsigned char)218;
signed char var_27 = (signed char)-93;
unsigned long long int arr_4 [12] [12] [12] ;
unsigned long long int arr_5 [12] [12] [12] ;
unsigned short arr_8 [12] [12] ;
unsigned short arr_11 [18] [18] ;
unsigned short arr_12 [18] ;
signed char arr_10 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 1259586277782729973ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 13435295298204418253ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)16269 : (unsigned short)57464;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)1439 : (unsigned short)33009;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_12 [i_0] = (unsigned short)53636;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (signed char)100 : (signed char)126;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
