#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 893080473U;
unsigned long long int var_1 = 3586769902958970781ULL;
long long int var_6 = -2808436965592489760LL;
unsigned long long int var_7 = 1712133289267683136ULL;
unsigned long long int var_9 = 6367268679704799509ULL;
unsigned short var_10 = (unsigned short)35006;
int zero = 0;
unsigned char var_15 = (unsigned char)67;
unsigned short var_16 = (unsigned short)57932;
long long int var_17 = 4951904155311620321LL;
unsigned long long int var_18 = 8413781519655178438ULL;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)87;
unsigned long long int var_21 = 15017196363503406753ULL;
unsigned char var_22 = (unsigned char)37;
_Bool arr_1 [16] [16] ;
unsigned int arr_7 [12] [12] ;
unsigned short arr_2 [16] ;
_Bool arr_8 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? 523140794U : 1074578310U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (unsigned short)24223;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
