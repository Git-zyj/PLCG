#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5748551451039309049LL;
unsigned int var_8 = 399913255U;
unsigned char var_10 = (unsigned char)206;
int zero = 0;
unsigned char var_13 = (unsigned char)86;
signed char var_14 = (signed char)-56;
unsigned char var_15 = (unsigned char)90;
short var_16 = (short)-2873;
unsigned short var_17 = (unsigned short)58179;
long long int var_18 = -3253421941489364114LL;
_Bool var_19 = (_Bool)0;
unsigned char arr_0 [14] [14] ;
long long int arr_2 [14] ;
unsigned int arr_5 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)134;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = -4058370890161840373LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = 2901640703U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
