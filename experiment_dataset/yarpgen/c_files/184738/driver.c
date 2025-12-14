#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8307351329689951138ULL;
unsigned long long int var_3 = 13570315009977236610ULL;
int var_5 = 1651287800;
unsigned short var_8 = (unsigned short)40391;
long long int var_11 = -4828298746444225956LL;
unsigned int var_12 = 2067191402U;
int zero = 0;
unsigned long long int var_13 = 15215971991391513961ULL;
long long int var_14 = -6513598539119079929LL;
unsigned int var_15 = 1394548419U;
long long int var_16 = -717741116013508893LL;
int var_17 = 987700713;
unsigned long long int var_18 = 3733464700375893594ULL;
long long int arr_0 [15] ;
unsigned long long int arr_1 [15] ;
long long int arr_2 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = -189420534648630676LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 16542497178115493220ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = -8542243697518260015LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
