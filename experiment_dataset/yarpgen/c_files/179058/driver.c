#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)10;
long long int var_3 = 1018322670482697156LL;
long long int var_4 = -8186273065705778LL;
signed char var_5 = (signed char)56;
_Bool var_6 = (_Bool)0;
unsigned short var_8 = (unsigned short)20875;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)-109;
signed char var_11 = (signed char)93;
signed char var_12 = (signed char)-49;
unsigned char var_14 = (unsigned char)110;
long long int var_19 = 1760406781893068914LL;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 2408985951U;
unsigned char var_22 = (unsigned char)49;
unsigned int var_23 = 2671256922U;
unsigned char var_24 = (unsigned char)237;
unsigned short var_25 = (unsigned short)58440;
unsigned int arr_8 [16] [16] [16] ;
unsigned short arr_11 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 3386877508U : 3288232208U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = (unsigned short)62222;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
