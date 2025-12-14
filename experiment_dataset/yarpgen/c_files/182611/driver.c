#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_3 = (unsigned char)158;
short var_4 = (short)-7643;
long long int var_6 = 29719816828433272LL;
int var_8 = 1133249602;
short var_9 = (short)-23801;
int zero = 0;
unsigned long long int var_10 = 1480999747951140889ULL;
int var_11 = -608209582;
unsigned long long int var_12 = 10576517135594422046ULL;
unsigned short var_13 = (unsigned short)53373;
signed char var_14 = (signed char)106;
unsigned short var_15 = (unsigned short)42655;
unsigned int var_16 = 105491491U;
unsigned long long int var_17 = 17627570918408386828ULL;
short var_18 = (short)-2822;
short var_19 = (short)9914;
long long int var_20 = -1239904477776366590LL;
unsigned long long int arr_0 [21] [21] ;
_Bool arr_1 [21] ;
signed char arr_9 [18] [18] ;
unsigned long long int arr_3 [21] [21] ;
int arr_4 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = 9726924842347041608ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_9 [i_0] [i_1] = (signed char)-100;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = 1551529830500683812ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = 224545816;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
