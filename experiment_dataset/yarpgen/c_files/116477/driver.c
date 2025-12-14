#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1683334138;
unsigned short var_1 = (unsigned short)433;
unsigned long long int var_4 = 12575832915687777773ULL;
short var_7 = (short)-7962;
short var_8 = (short)-13098;
unsigned short var_11 = (unsigned short)61104;
unsigned char var_14 = (unsigned char)209;
long long int var_15 = -6454847997847802041LL;
int zero = 0;
signed char var_17 = (signed char)127;
unsigned int var_18 = 823699910U;
_Bool var_19 = (_Bool)1;
int var_20 = 534545846;
signed char var_21 = (signed char)-39;
_Bool arr_0 [21] ;
unsigned int arr_1 [21] ;
_Bool arr_2 [21] ;
unsigned char arr_3 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 410336175U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (unsigned char)218;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
