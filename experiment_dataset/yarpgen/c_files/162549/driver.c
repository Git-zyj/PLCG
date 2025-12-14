#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3651535157699809464LL;
unsigned int var_2 = 2855488329U;
short var_3 = (short)18831;
int var_7 = -1704544216;
short var_9 = (short)6814;
unsigned char var_10 = (unsigned char)22;
unsigned short var_14 = (unsigned short)24856;
unsigned char var_15 = (unsigned char)51;
int zero = 0;
long long int var_18 = -8632738667557287971LL;
_Bool var_19 = (_Bool)0;
long long int var_20 = -7878628390426554198LL;
short var_21 = (short)-27596;
unsigned char var_22 = (unsigned char)216;
long long int var_23 = 3122660733613860022LL;
signed char var_24 = (signed char)-104;
int var_25 = -264402114;
short var_26 = (short)-6073;
short arr_1 [19] ;
long long int arr_4 [19] ;
signed char arr_8 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (short)2014;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = -5511668552201143326LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)-123;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
