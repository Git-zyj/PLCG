#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1710131699U;
short var_3 = (short)-11132;
signed char var_4 = (signed char)102;
unsigned char var_5 = (unsigned char)188;
unsigned short var_6 = (unsigned short)48813;
short var_7 = (short)-26231;
unsigned char var_9 = (unsigned char)230;
_Bool var_10 = (_Bool)1;
unsigned int var_12 = 435216605U;
signed char var_14 = (signed char)72;
int zero = 0;
unsigned long long int var_15 = 9378542334295875468ULL;
unsigned long long int var_16 = 2486883968949937429ULL;
short var_17 = (short)-4905;
unsigned int var_18 = 3014943266U;
unsigned int var_19 = 419773409U;
unsigned char var_20 = (unsigned char)82;
unsigned int var_21 = 3125148999U;
_Bool arr_0 [15] [15] ;
int arr_1 [15] [15] ;
unsigned char arr_2 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = -707742103;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned char)105;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
