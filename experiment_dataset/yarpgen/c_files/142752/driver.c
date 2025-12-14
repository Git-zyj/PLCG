#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1073105540;
short var_5 = (short)26677;
unsigned char var_10 = (unsigned char)133;
short var_11 = (short)17292;
_Bool var_12 = (_Bool)1;
short var_13 = (short)-19869;
unsigned short var_14 = (unsigned short)40405;
unsigned char var_17 = (unsigned char)230;
int zero = 0;
unsigned char var_19 = (unsigned char)5;
int var_20 = 1621764810;
unsigned short var_21 = (unsigned short)6670;
unsigned int var_22 = 1564697267U;
short var_23 = (short)-20202;
int var_24 = 222911629;
unsigned short arr_0 [23] [23] ;
short arr_1 [23] ;
long long int arr_2 [23] ;
short arr_4 [24] ;
long long int arr_5 [24] ;
unsigned long long int arr_3 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)17627;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (short)23922;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 8013414559172452424LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (short)-17682;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = 4420935630437006281LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 4479203311855085306ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
