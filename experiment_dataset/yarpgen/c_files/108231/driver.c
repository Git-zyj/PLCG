#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_3 = (_Bool)1;
short var_5 = (short)7046;
unsigned long long int var_6 = 7985122194581761620ULL;
unsigned int var_7 = 1513108282U;
short var_10 = (short)1654;
unsigned long long int var_13 = 620807823997325631ULL;
long long int var_14 = 2684921168053464226LL;
signed char var_15 = (signed char)33;
long long int var_16 = -5154695665900459750LL;
unsigned long long int var_17 = 5457184078620755024ULL;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 1118559444U;
unsigned char var_20 = (unsigned char)249;
int var_21 = -1473973756;
unsigned char var_22 = (unsigned char)12;
_Bool var_23 = (_Bool)0;
unsigned long long int var_24 = 13073456972278379870ULL;
unsigned long long int var_25 = 229974102125435360ULL;
_Bool arr_0 [14] [14] ;
int arr_1 [14] [14] ;
signed char arr_2 [14] ;
unsigned long long int arr_3 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = -1583336387;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (signed char)-113;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = 5375680699319096770ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
