#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-27155;
unsigned char var_1 = (unsigned char)173;
unsigned long long int var_2 = 7650787905712180864ULL;
short var_5 = (short)21265;
signed char var_8 = (signed char)24;
unsigned int var_9 = 1116573611U;
unsigned short var_11 = (unsigned short)50249;
unsigned long long int var_14 = 14220973761097676972ULL;
signed char var_15 = (signed char)87;
int zero = 0;
unsigned short var_16 = (unsigned short)58196;
int var_17 = 2017630728;
long long int var_18 = 697398159101637593LL;
short var_19 = (short)14481;
unsigned char var_20 = (unsigned char)185;
unsigned int var_21 = 1687530379U;
int var_22 = 1827890369;
unsigned int var_23 = 4289619309U;
int var_24 = 2063798757;
long long int arr_15 [17] ;
unsigned long long int arr_16 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? -2736401690948941808LL : -7240066543717070915LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? 15910237919915700059ULL : 9659049315284422602ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
