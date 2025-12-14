#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)164;
signed char var_2 = (signed char)-26;
unsigned char var_4 = (unsigned char)116;
int var_5 = 1137044020;
unsigned short var_6 = (unsigned short)36829;
unsigned int var_7 = 3760657636U;
_Bool var_8 = (_Bool)0;
unsigned char var_12 = (unsigned char)125;
int zero = 0;
unsigned long long int var_13 = 2240517664911479353ULL;
int var_14 = 650476385;
unsigned long long int var_15 = 17816950417234771849ULL;
_Bool var_16 = (_Bool)1;
short var_17 = (short)-4811;
short var_18 = (short)-18291;
_Bool var_19 = (_Bool)0;
_Bool arr_7 [21] [21] ;
short arr_8 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (short)-14002 : (short)828;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
