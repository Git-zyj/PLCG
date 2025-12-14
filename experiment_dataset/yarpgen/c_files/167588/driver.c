#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1682672289;
unsigned long long int var_2 = 13137667476871962061ULL;
_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)58;
short var_6 = (short)-29815;
int var_8 = 582713061;
unsigned short var_10 = (unsigned short)58416;
long long int var_13 = 9019632827521417345LL;
int zero = 0;
unsigned char var_14 = (unsigned char)28;
unsigned int var_15 = 1741447409U;
unsigned long long int var_16 = 16106442979514261133ULL;
unsigned long long int var_17 = 11644882419393407579ULL;
unsigned long long int var_18 = 1453650541418207002ULL;
unsigned char var_19 = (unsigned char)181;
unsigned char var_20 = (unsigned char)207;
long long int var_21 = 2025653255374166898LL;
unsigned int var_22 = 1864844767U;
signed char var_23 = (signed char)66;
unsigned char var_24 = (unsigned char)15;
unsigned char var_25 = (unsigned char)78;
short arr_0 [22] ;
unsigned short arr_4 [22] [22] ;
unsigned short arr_5 [22] ;
signed char arr_8 [22] [22] [22] [22] ;
unsigned long long int arr_10 [22] [22] [22] [22] [22] [22] ;
unsigned short arr_13 [22] [22] [22] [22] [22] ;
unsigned char arr_17 [13] [13] ;
signed char arr_21 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (short)-23077;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)61200 : (unsigned short)38826;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (unsigned short)51026;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (signed char)86 : (signed char)19;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 7190014824478375163ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)4201;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_17 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)127 : (unsigned char)69;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? (signed char)-37 : (signed char)103;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
