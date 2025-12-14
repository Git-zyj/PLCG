#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -36992978766608183LL;
long long int var_1 = -7499445715057024578LL;
unsigned char var_2 = (unsigned char)130;
long long int var_3 = -8415987034164189699LL;
long long int var_4 = 6839006863637584872LL;
signed char var_5 = (signed char)125;
unsigned short var_7 = (unsigned short)45368;
unsigned short var_8 = (unsigned short)24693;
unsigned short var_9 = (unsigned short)26249;
_Bool var_12 = (_Bool)0;
unsigned long long int var_14 = 10326093857752945959ULL;
int zero = 0;
unsigned long long int var_16 = 1778567674719532045ULL;
unsigned char var_17 = (unsigned char)231;
unsigned long long int var_18 = 4281096336828296854ULL;
unsigned int var_19 = 162968861U;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 14452529247119251650ULL;
signed char var_22 = (signed char)-89;
unsigned short arr_0 [23] ;
unsigned int arr_2 [23] ;
long long int arr_4 [23] [23] [23] ;
unsigned char arr_6 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (unsigned short)46242;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 2784687932U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 2745594603928398569LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned char)249;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
