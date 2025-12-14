#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)1;
unsigned int var_2 = 2423729098U;
signed char var_3 = (signed char)25;
signed char var_4 = (signed char)-43;
int var_5 = 201862936;
signed char var_7 = (signed char)43;
int var_8 = -50606799;
signed char var_9 = (signed char)-111;
signed char var_10 = (signed char)-63;
_Bool var_13 = (_Bool)0;
short var_14 = (short)-25669;
unsigned int var_15 = 345797364U;
short var_16 = (short)-7544;
unsigned long long int var_17 = 3423370991431615829ULL;
int zero = 0;
unsigned int var_19 = 1567544961U;
long long int var_20 = -6817980166169889200LL;
int var_21 = -1496303475;
unsigned long long int var_22 = 14266125313675860794ULL;
unsigned int var_23 = 879410438U;
unsigned short arr_0 [20] [20] ;
_Bool arr_1 [20] ;
int arr_2 [20] [20] ;
unsigned int arr_4 [20] [20] [20] ;
unsigned short arr_5 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)58530;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = 665100709;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 614688873U : 2498497766U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)1778 : (unsigned short)41306;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
