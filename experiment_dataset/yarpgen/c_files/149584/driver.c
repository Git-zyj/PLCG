#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)20503;
long long int var_11 = 7408422843670402571LL;
signed char var_12 = (signed char)-3;
unsigned char var_14 = (unsigned char)102;
short var_17 = (short)-13658;
int zero = 0;
signed char var_18 = (signed char)-85;
int var_19 = -1986068385;
unsigned long long int var_20 = 1491256788301044251ULL;
short var_21 = (short)32416;
short var_22 = (short)16246;
int var_23 = 1008324086;
long long int arr_0 [20] ;
_Bool arr_2 [20] [20] ;
unsigned long long int arr_5 [20] [20] ;
unsigned long long int arr_11 [20] [20] ;
long long int arr_13 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = -8071749870029161761LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = 5016368798274594092ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? 17357245967797577221ULL : 11004818065194880813ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_13 [i_0] = 8381656969636183113LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
