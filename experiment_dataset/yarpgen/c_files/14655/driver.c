#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)241;
short var_4 = (short)6797;
int var_5 = 1092116199;
unsigned char var_6 = (unsigned char)74;
long long int var_7 = 6522286814785762287LL;
unsigned short var_8 = (unsigned short)32858;
unsigned long long int var_9 = 5661521412278659060ULL;
int var_10 = 150477045;
short var_11 = (short)-20644;
unsigned int var_12 = 821665746U;
signed char var_13 = (signed char)62;
int zero = 0;
signed char var_14 = (signed char)31;
short var_15 = (short)-32658;
unsigned short var_16 = (unsigned short)58556;
short var_17 = (short)27698;
int var_18 = -935440283;
unsigned char var_19 = (unsigned char)122;
unsigned int var_20 = 400370694U;
unsigned char var_21 = (unsigned char)121;
unsigned int var_22 = 2351044160U;
unsigned char var_23 = (unsigned char)34;
int var_24 = 1902749272;
short var_25 = (short)-16371;
unsigned int arr_5 [10] [10] [10] ;
unsigned short arr_10 [10] ;
_Bool arr_18 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 2737219538U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = (unsigned short)4096;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_18 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
