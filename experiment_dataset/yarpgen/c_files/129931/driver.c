#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2677939761U;
unsigned short var_2 = (unsigned short)44169;
unsigned long long int var_3 = 9030755701627253487ULL;
_Bool var_4 = (_Bool)0;
short var_5 = (short)22075;
long long int var_12 = 3461957853222604557LL;
short var_14 = (short)24498;
unsigned char var_15 = (unsigned char)177;
int zero = 0;
short var_17 = (short)32642;
_Bool var_18 = (_Bool)1;
short var_19 = (short)8709;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 2107607238451247715ULL;
long long int var_22 = -3599718317388020670LL;
signed char arr_0 [24] [24] ;
long long int arr_1 [24] [24] ;
short arr_3 [20] [20] ;
short arr_6 [20] ;
unsigned long long int arr_7 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)76 : (signed char)39;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = 7325167249462636622LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-1249;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (short)-1174;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = 830912003716080594ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
