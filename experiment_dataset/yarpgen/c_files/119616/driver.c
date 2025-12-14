#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)34;
_Bool var_1 = (_Bool)0;
unsigned short var_3 = (unsigned short)18097;
long long int var_4 = -7343919717967726390LL;
signed char var_5 = (signed char)-118;
_Bool var_6 = (_Bool)1;
long long int var_8 = 2543161808411605961LL;
_Bool var_9 = (_Bool)1;
int zero = 0;
short var_10 = (short)-10443;
int var_11 = -486491977;
long long int var_12 = 6898592274569697653LL;
unsigned int var_13 = 2513479017U;
unsigned short var_14 = (unsigned short)20042;
long long int var_15 = -7830367505772045594LL;
unsigned int var_16 = 1020190796U;
unsigned short var_17 = (unsigned short)22821;
unsigned short var_18 = (unsigned short)269;
long long int arr_3 [15] [15] ;
signed char arr_6 [21] ;
int arr_11 [20] ;
unsigned int arr_12 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = 1384330872087111530LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (signed char)-71 : (signed char)10;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_11 [i_0] = -178931494;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_12 [i_0] = 1248813532U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
