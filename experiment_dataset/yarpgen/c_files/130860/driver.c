#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3234955241348396055ULL;
long long int var_5 = 2887167441400011938LL;
int var_9 = 898971947;
unsigned long long int var_10 = 11583785939621879884ULL;
unsigned int var_12 = 458023812U;
int var_13 = 1514490903;
unsigned short var_14 = (unsigned short)23410;
int zero = 0;
unsigned int var_17 = 1470213432U;
signed char var_18 = (signed char)52;
int var_19 = -1952911741;
_Bool var_20 = (_Bool)1;
short var_21 = (short)23678;
long long int var_22 = -4770688994373863620LL;
signed char var_23 = (signed char)44;
_Bool var_24 = (_Bool)1;
unsigned char arr_1 [12] [12] ;
long long int arr_2 [12] ;
unsigned short arr_4 [15] [15] ;
unsigned long long int arr_5 [15] [15] ;
_Bool arr_6 [15] ;
unsigned char arr_8 [15] ;
unsigned int arr_7 [15] ;
unsigned int arr_10 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)223 : (unsigned char)207;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 1972335532905486057LL : -5972813248963775486LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)47442;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = 3886600259233858759ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = (unsigned char)10;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = 2557387728U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_10 [i_0] = 1434912286U;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
