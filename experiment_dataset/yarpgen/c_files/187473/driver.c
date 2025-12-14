#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)11645;
unsigned int var_1 = 356450636U;
long long int var_2 = 1634529274541962803LL;
long long int var_3 = 8868612149621095697LL;
short var_4 = (short)11137;
unsigned int var_6 = 3689706851U;
long long int var_7 = -4784009100735916822LL;
unsigned short var_8 = (unsigned short)37562;
long long int var_11 = -4198442939685924834LL;
unsigned int var_13 = 1382915733U;
_Bool var_14 = (_Bool)0;
long long int var_15 = -6809496460134448689LL;
unsigned short var_16 = (unsigned short)65070;
int zero = 0;
unsigned long long int var_17 = 6776289806147033127ULL;
unsigned short var_18 = (unsigned short)44452;
long long int var_19 = -1611822592263839661LL;
long long int var_20 = -9176095791699211025LL;
unsigned int var_21 = 768710751U;
long long int var_22 = 7610351031214397895LL;
unsigned int var_23 = 3437519447U;
_Bool var_24 = (_Bool)0;
long long int arr_0 [15] ;
unsigned long long int arr_1 [15] [15] ;
_Bool arr_2 [15] ;
long long int arr_4 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = -1663812846551708114LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = 7956952937409199136ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = -910990533725220087LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
