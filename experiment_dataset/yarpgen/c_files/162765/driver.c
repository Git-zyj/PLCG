#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15156462931052211187ULL;
signed char var_2 = (signed char)-38;
unsigned int var_3 = 325429180U;
unsigned char var_4 = (unsigned char)190;
int var_6 = -379205306;
unsigned short var_8 = (unsigned short)42289;
signed char var_9 = (signed char)-43;
_Bool var_10 = (_Bool)1;
unsigned long long int var_12 = 7238815561254323167ULL;
int var_13 = -1518243517;
int var_14 = 791239357;
int zero = 0;
unsigned short var_16 = (unsigned short)16246;
unsigned char var_17 = (unsigned char)156;
long long int var_18 = 1017117192538688801LL;
long long int var_19 = -6260248010827044617LL;
int var_20 = 551579139;
unsigned char var_21 = (unsigned char)155;
unsigned short arr_2 [22] ;
_Bool arr_3 [22] [22] [22] ;
unsigned short arr_8 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (unsigned short)49146;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned short)25047;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
