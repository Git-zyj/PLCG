#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13174425627643353177ULL;
short var_1 = (short)-14230;
unsigned short var_2 = (unsigned short)7387;
unsigned short var_3 = (unsigned short)35224;
short var_5 = (short)-21786;
unsigned short var_6 = (unsigned short)32407;
unsigned int var_7 = 1810310469U;
long long int var_8 = -3219871993038336344LL;
unsigned short var_9 = (unsigned short)7487;
unsigned short var_10 = (unsigned short)38490;
int zero = 0;
short var_11 = (short)-23428;
unsigned long long int var_12 = 11201892021022644837ULL;
unsigned char var_13 = (unsigned char)109;
long long int var_14 = -3899180202280673519LL;
unsigned short var_15 = (unsigned short)43530;
unsigned int var_16 = 1855628524U;
signed char var_17 = (signed char)-86;
unsigned short var_18 = (unsigned short)21847;
unsigned int arr_0 [22] ;
long long int arr_2 [22] ;
unsigned short arr_3 [22] ;
long long int arr_4 [22] [22] [22] ;
_Bool arr_6 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 3906768911U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = -1126738545017677546LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (unsigned short)28441;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 507781325320950464LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
