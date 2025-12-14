#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_2 = -501695026;
short var_5 = (short)-27553;
unsigned long long int var_6 = 3958510291778138353ULL;
short var_8 = (short)21503;
short var_10 = (short)20835;
unsigned long long int var_13 = 3983070434554159677ULL;
int zero = 0;
short var_14 = (short)-11473;
signed char var_15 = (signed char)108;
int var_16 = 1795558587;
_Bool var_17 = (_Bool)1;
unsigned short arr_8 [22] [22] [22] ;
unsigned long long int arr_9 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned short)37535;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 6503354787927271529ULL : 15768561252725161473ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
