#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)18;
unsigned char var_1 = (unsigned char)111;
_Bool var_3 = (_Bool)1;
unsigned char var_5 = (unsigned char)111;
signed char var_6 = (signed char)96;
unsigned int var_7 = 1627173140U;
signed char var_8 = (signed char)9;
unsigned int var_10 = 373855675U;
long long int var_13 = 4548007985951014144LL;
int zero = 0;
unsigned char var_14 = (unsigned char)247;
_Bool var_15 = (_Bool)1;
long long int var_16 = -551078020153129608LL;
unsigned int var_17 = 1059307259U;
_Bool var_18 = (_Bool)1;
long long int arr_0 [18] ;
unsigned int arr_2 [18] [18] ;
signed char arr_3 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = -1364652636755271620LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = 3241988416U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (signed char)-122;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
