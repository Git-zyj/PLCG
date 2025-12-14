#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)52763;
signed char var_1 = (signed char)77;
short var_2 = (short)4349;
unsigned int var_4 = 3550882873U;
unsigned long long int var_5 = 10311247755117878665ULL;
int var_6 = -1985024592;
unsigned char var_10 = (unsigned char)66;
unsigned int var_11 = 913488699U;
int zero = 0;
int var_12 = -1838690936;
long long int var_13 = -4083619632647575234LL;
long long int var_14 = 4983320396790457355LL;
int var_15 = 2009587673;
signed char var_16 = (signed char)121;
int arr_0 [11] ;
long long int arr_1 [11] ;
int arr_2 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = -1236143653;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = -1235736704222879821LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 71204861;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
