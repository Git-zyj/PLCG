#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-5271;
unsigned long long int var_2 = 10275714119114715984ULL;
signed char var_3 = (signed char)33;
short var_5 = (short)-24690;
_Bool var_6 = (_Bool)1;
unsigned short var_12 = (unsigned short)52614;
_Bool var_13 = (_Bool)0;
int var_15 = 72633598;
unsigned int var_16 = 3916897744U;
int zero = 0;
unsigned long long int var_18 = 8519038019356228632ULL;
short var_19 = (short)-7578;
unsigned long long int var_20 = 2471228659095677387ULL;
unsigned int var_21 = 1104514972U;
signed char var_22 = (signed char)-78;
short var_23 = (short)12617;
signed char var_24 = (signed char)-56;
unsigned short var_25 = (unsigned short)14956;
int arr_0 [21] [21] ;
short arr_1 [21] ;
unsigned int arr_2 [21] [21] ;
unsigned short arr_5 [21] ;
signed char arr_8 [21] ;
signed char arr_3 [21] ;
unsigned char arr_6 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = -50647208;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (short)7423;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = 2647313600U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (unsigned short)60239;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = (signed char)-68;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (signed char)-34;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (unsigned char)125;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
