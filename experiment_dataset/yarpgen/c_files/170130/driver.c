#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)168;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)47223;
long long int var_8 = -616891420837579552LL;
long long int var_9 = -6225513256099646066LL;
short var_10 = (short)-1629;
int var_11 = 1384182667;
unsigned short var_13 = (unsigned short)994;
signed char var_14 = (signed char)-66;
signed char var_15 = (signed char)45;
int zero = 0;
unsigned char var_16 = (unsigned char)103;
signed char var_17 = (signed char)27;
_Bool var_18 = (_Bool)0;
long long int var_19 = -5850693315587996531LL;
signed char var_20 = (signed char)124;
unsigned char arr_0 [14] ;
unsigned long long int arr_1 [14] ;
int arr_2 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned char)211;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 6231912678248707599ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = -2041152878;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
