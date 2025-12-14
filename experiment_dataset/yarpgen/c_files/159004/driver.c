#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2882438633U;
short var_1 = (short)23653;
short var_7 = (short)-31551;
long long int var_8 = -2175075574935571253LL;
int var_9 = 1896252255;
short var_12 = (short)-23842;
unsigned long long int var_13 = 11647553697817829858ULL;
signed char var_14 = (signed char)30;
long long int var_15 = -5311780449978120309LL;
unsigned char var_19 = (unsigned char)219;
int zero = 0;
_Bool var_20 = (_Bool)0;
int var_21 = -1306069145;
long long int var_22 = -4595664561130362245LL;
signed char var_23 = (signed char)76;
short var_24 = (short)2545;
unsigned short var_25 = (unsigned short)46944;
short var_26 = (short)-4791;
signed char var_27 = (signed char)108;
signed char arr_0 [17] [17] ;
unsigned short arr_1 [17] ;
int arr_4 [11] [11] ;
unsigned long long int arr_5 [11] [11] ;
long long int arr_2 [17] ;
unsigned int arr_3 [17] ;
short arr_15 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)63;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned short)27350;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = 1351380681;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = 7168045890115861255ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = -8962450891808144921LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = 636933085U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_15 [i_0] = (short)24468;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
