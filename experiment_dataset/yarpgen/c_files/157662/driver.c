#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)32395;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 3935350626U;
unsigned char var_6 = (unsigned char)141;
int var_7 = 1499754267;
_Bool var_9 = (_Bool)1;
int var_11 = -1333091066;
short var_12 = (short)32480;
unsigned short var_14 = (unsigned short)18822;
unsigned short var_15 = (unsigned short)20447;
unsigned short var_17 = (unsigned short)64300;
signed char var_18 = (signed char)36;
int zero = 0;
unsigned int var_19 = 4059264306U;
unsigned int var_20 = 2056870559U;
unsigned short var_21 = (unsigned short)10204;
unsigned int var_22 = 266772975U;
unsigned long long int var_23 = 3643426425673943868ULL;
unsigned int var_24 = 403066715U;
unsigned long long int var_25 = 11772523704267367665ULL;
_Bool arr_0 [16] ;
int arr_1 [16] [16] ;
unsigned char arr_5 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = -2106140093;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned char)222 : (unsigned char)88;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
