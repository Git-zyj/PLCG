#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)13502;
signed char var_3 = (signed char)-103;
short var_4 = (short)-25352;
int var_5 = -421135614;
_Bool var_6 = (_Bool)0;
long long int var_8 = 4629129265116819305LL;
unsigned long long int var_9 = 8313218104698229976ULL;
int zero = 0;
signed char var_10 = (signed char)127;
signed char var_11 = (signed char)63;
long long int var_12 = 2053959184538891386LL;
unsigned short var_13 = (unsigned short)31508;
_Bool var_14 = (_Bool)1;
short arr_0 [22] [22] ;
int arr_1 [22] ;
unsigned char arr_3 [22] [22] ;
unsigned long long int arr_4 [22] ;
unsigned short arr_8 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (short)12981;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = -515627587;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)253;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = 16507310774477977404ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = (unsigned short)55739;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
