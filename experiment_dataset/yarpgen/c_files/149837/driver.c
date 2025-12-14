#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 12802056507670600151ULL;
unsigned long long int var_3 = 16389964181373798838ULL;
unsigned long long int var_6 = 15056785483139997591ULL;
unsigned int var_8 = 2889382622U;
int zero = 0;
short var_14 = (short)-31810;
unsigned long long int var_15 = 18157461538801588259ULL;
unsigned int var_16 = 3099927936U;
short var_17 = (short)10088;
unsigned short var_18 = (unsigned short)38368;
short var_19 = (short)29373;
long long int var_20 = -603209981479745171LL;
short arr_8 [17] [17] [17] ;
short arr_13 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)-11134 : (short)10116;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_13 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)2325 : (short)-1285;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
