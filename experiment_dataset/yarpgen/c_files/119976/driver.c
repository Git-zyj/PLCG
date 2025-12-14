#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)24310;
long long int var_3 = -6155638537678477238LL;
short var_5 = (short)-4571;
int var_9 = 1563993773;
unsigned char var_10 = (unsigned char)101;
int var_11 = 762676796;
int var_12 = 895737693;
_Bool var_13 = (_Bool)0;
unsigned long long int var_16 = 11103461729721179051ULL;
int zero = 0;
long long int var_17 = 4478910903168312899LL;
_Bool var_18 = (_Bool)1;
long long int var_19 = 7461775752572719100LL;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 315616672U;
unsigned short arr_0 [17] ;
unsigned short arr_1 [17] ;
unsigned long long int arr_2 [16] ;
unsigned short arr_3 [16] ;
int arr_4 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (unsigned short)20931;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned short)46386;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 509173329095724200ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (unsigned short)50600;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = -1442888100;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
