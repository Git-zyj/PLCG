#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8029022934392477331LL;
unsigned long long int var_2 = 1205177890174616430ULL;
long long int var_3 = -4487151971375895515LL;
int var_5 = -123985560;
int var_8 = -1535590712;
unsigned int var_9 = 3140831850U;
short var_10 = (short)-13187;
int zero = 0;
unsigned long long int var_11 = 17547834495329133865ULL;
signed char var_12 = (signed char)-48;
signed char var_13 = (signed char)124;
unsigned int var_14 = 3188815002U;
long long int var_15 = 2551977052785824454LL;
_Bool arr_0 [24] [24] ;
int arr_1 [24] [24] ;
_Bool arr_2 [24] [24] ;
signed char arr_3 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = -580290895;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (signed char)70;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
