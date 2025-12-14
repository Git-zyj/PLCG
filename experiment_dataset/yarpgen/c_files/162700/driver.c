#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)24848;
unsigned short var_1 = (unsigned short)23910;
unsigned short var_2 = (unsigned short)28713;
unsigned short var_3 = (unsigned short)24741;
unsigned short var_4 = (unsigned short)47868;
unsigned short var_6 = (unsigned short)24838;
unsigned short var_8 = (unsigned short)51168;
unsigned short var_9 = (unsigned short)50777;
int zero = 0;
unsigned short var_10 = (unsigned short)39622;
unsigned short var_11 = (unsigned short)3965;
unsigned short var_12 = (unsigned short)56396;
unsigned short var_13 = (unsigned short)9377;
unsigned short var_14 = (unsigned short)25037;
unsigned short arr_0 [20] ;
unsigned short arr_1 [20] ;
unsigned short arr_3 [20] [20] ;
unsigned short arr_5 [20] [20] ;
unsigned short arr_7 [20] ;
unsigned short arr_10 [20] ;
unsigned short arr_4 [20] ;
unsigned short arr_8 [20] [20] ;
unsigned short arr_11 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)58042 : (unsigned short)13915;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (unsigned short)55531;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)16888;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)13384;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (unsigned short)41082;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = (unsigned short)61947;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)31288 : (unsigned short)48606;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned short)10234;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_11 [i_0] = (unsigned short)32230;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
