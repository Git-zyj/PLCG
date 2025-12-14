#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned int var_4 = 2729608434U;
short var_5 = (short)-28727;
unsigned int var_6 = 4172468698U;
short var_7 = (short)24154;
_Bool var_8 = (_Bool)1;
long long int var_11 = -6462364511997626433LL;
unsigned int var_12 = 476249918U;
unsigned int var_14 = 1132499538U;
unsigned int var_15 = 3931155971U;
unsigned long long int var_16 = 1332876689374373722ULL;
int zero = 0;
long long int var_18 = 6604253594175041650LL;
unsigned int var_19 = 1005164879U;
unsigned int var_20 = 1572856324U;
long long int arr_7 [19] ;
unsigned long long int arr_8 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 5121628851071550842LL : -944423141511152418LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1745767107230112460ULL : 16613151609218486785ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
