#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -514578306;
int var_1 = 347098325;
long long int var_3 = 164659303055164806LL;
unsigned char var_4 = (unsigned char)206;
short var_5 = (short)-16189;
unsigned int var_6 = 393235995U;
unsigned short var_7 = (unsigned short)48070;
short var_8 = (short)-18010;
unsigned short var_10 = (unsigned short)29606;
int var_11 = 1188398701;
short var_12 = (short)14976;
long long int var_13 = 4381198255977955409LL;
int zero = 0;
unsigned short var_15 = (unsigned short)6013;
long long int var_16 = 6123307708448195138LL;
signed char var_17 = (signed char)-58;
signed char var_18 = (signed char)101;
short var_19 = (short)9996;
long long int var_20 = -6796093173810678487LL;
long long int arr_0 [10] ;
long long int arr_1 [10] ;
int arr_2 [10] ;
_Bool arr_3 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = -7411945904155916364LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 2763214085040651543LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = -152533987;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
