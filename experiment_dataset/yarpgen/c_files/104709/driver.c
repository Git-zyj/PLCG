#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_2 = (short)-25093;
short var_9 = (short)22454;
unsigned short var_10 = (unsigned short)29948;
int var_13 = -1447942647;
signed char var_15 = (signed char)-116;
unsigned short var_17 = (unsigned short)32525;
unsigned char var_18 = (unsigned char)148;
int zero = 0;
int var_20 = 1034716735;
unsigned short var_21 = (unsigned short)28157;
signed char var_22 = (signed char)-57;
int var_23 = -1431398424;
unsigned short var_24 = (unsigned short)35693;
_Bool var_25 = (_Bool)0;
_Bool arr_0 [19] ;
long long int arr_1 [19] ;
_Bool arr_4 [19] ;
long long int arr_5 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = -8043213000368585468LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = 7691656554707808907LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
