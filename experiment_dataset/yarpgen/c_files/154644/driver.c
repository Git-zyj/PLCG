#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1656945924;
signed char var_2 = (signed char)-49;
long long int var_4 = 5281941109010586363LL;
short var_7 = (short)10758;
unsigned int var_8 = 1131629167U;
_Bool var_9 = (_Bool)0;
int var_10 = 807696318;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 14841237728384189609ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)66;
unsigned int var_14 = 1837408131U;
unsigned char var_15 = (unsigned char)104;
unsigned int var_16 = 3403985907U;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)50809;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)-10;
unsigned short arr_2 [17] ;
short arr_4 [18] [18] ;
signed char arr_6 [18] [18] ;
short arr_3 [17] ;
short arr_7 [18] ;
int arr_8 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (unsigned short)36881;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-4135;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)78;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (short)-14881;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (short)29843 : (short)9017;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? -1957926133 : -1049030444;
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
