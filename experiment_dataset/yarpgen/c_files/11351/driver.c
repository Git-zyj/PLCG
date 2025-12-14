#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)165;
short var_1 = (short)-11373;
unsigned short var_2 = (unsigned short)25910;
unsigned long long int var_3 = 7698797144705560826ULL;
short var_4 = (short)-23133;
unsigned char var_8 = (unsigned char)245;
unsigned char var_11 = (unsigned char)236;
unsigned char var_14 = (unsigned char)116;
unsigned char var_15 = (unsigned char)68;
unsigned int var_16 = 343310583U;
int var_17 = 1201825824;
unsigned int var_18 = 270052702U;
short var_19 = (short)29888;
int zero = 0;
long long int var_20 = 1521438579855390425LL;
signed char var_21 = (signed char)2;
signed char var_22 = (signed char)-63;
short var_23 = (short)-19380;
unsigned char var_24 = (unsigned char)196;
unsigned long long int var_25 = 4002636324488601593ULL;
signed char var_26 = (signed char)95;
_Bool arr_0 [22] ;
long long int arr_2 [22] ;
short arr_3 [22] [22] ;
unsigned char arr_6 [22] [22] ;
short arr_4 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 4778166606894440050LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-22285;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)247;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (short)-29824;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
