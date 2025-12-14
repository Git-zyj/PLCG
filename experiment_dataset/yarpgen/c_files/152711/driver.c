#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-27;
signed char var_1 = (signed char)-55;
short var_2 = (short)-18633;
unsigned short var_3 = (unsigned short)57934;
long long int var_4 = -2406776928286967607LL;
short var_7 = (short)-31097;
int var_8 = 184430197;
short var_11 = (short)-1640;
short var_12 = (short)-20361;
int zero = 0;
int var_13 = 136932469;
unsigned long long int var_14 = 7516687580586229382ULL;
int var_15 = -1224936419;
int var_16 = 1219122345;
unsigned int var_17 = 2429374436U;
signed char var_18 = (signed char)-111;
short var_19 = (short)-14361;
long long int var_20 = -905356120254367005LL;
short var_21 = (short)24535;
unsigned short var_22 = (unsigned short)21541;
signed char var_23 = (signed char)-46;
unsigned long long int arr_0 [19] ;
short arr_2 [19] ;
long long int arr_5 [17] [17] ;
unsigned int arr_7 [17] ;
unsigned long long int arr_11 [11] ;
short arr_4 [19] [19] ;
long long int arr_8 [17] ;
long long int arr_15 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 4136526144748260977ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (short)17139;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = -7154142703016274554LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = 1545063352U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_11 [i_0] = 7435092200490105591ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-8178;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = -690959949548628023LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_15 [i_0] [i_1] = 2553603417236120433LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
