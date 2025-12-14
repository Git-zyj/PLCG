#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)31244;
long long int var_3 = -77662593981663858LL;
long long int var_4 = -5064389349171533277LL;
unsigned int var_5 = 1099515337U;
long long int var_11 = 6218670539571393025LL;
unsigned int var_12 = 1338644616U;
int zero = 0;
signed char var_14 = (signed char)54;
long long int var_15 = -3931329850377444874LL;
int var_16 = -1458249876;
long long int var_17 = 4940809312958454034LL;
unsigned int var_18 = 3005426704U;
int var_19 = -634711435;
signed char var_20 = (signed char)-51;
unsigned short var_21 = (unsigned short)46640;
long long int var_22 = 3354732109571292705LL;
unsigned int var_23 = 1474131710U;
long long int var_24 = 755288018031891953LL;
short var_25 = (short)-13933;
unsigned short var_26 = (unsigned short)16509;
unsigned short arr_0 [14] ;
unsigned int arr_2 [14] [14] ;
unsigned short arr_5 [14] [14] [14] ;
short arr_7 [14] [14] ;
long long int arr_10 [24] ;
long long int arr_11 [24] ;
int arr_13 [12] ;
unsigned short arr_4 [14] ;
unsigned int arr_8 [14] ;
int arr_9 [14] [14] ;
_Bool arr_12 [24] ;
long long int arr_17 [12] ;
unsigned short arr_24 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned short)44510;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = 3454377647U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)11323 : (unsigned short)28389;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_7 [i_0] [i_1] = (short)32097;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = -3026613805062255566LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_11 [i_0] = 1526540071912106137LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_13 [i_0] = -1017773869;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)17900 : (unsigned short)1413;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 193102279U : 3827452141U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? -521806305 : 1917409134;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_12 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_17 [i_0] = 4096129896863762282LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_24 [i_0] [i_1] = (unsigned short)31735;
}

void checksum() {
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
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
