#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 842565531U;
_Bool var_3 = (_Bool)0;
unsigned int var_4 = 1827430811U;
_Bool var_8 = (_Bool)1;
int var_10 = -1897204032;
long long int var_11 = -1156527401163683294LL;
signed char var_13 = (signed char)22;
int zero = 0;
signed char var_14 = (signed char)-29;
unsigned int var_15 = 1671718945U;
unsigned char var_16 = (unsigned char)155;
unsigned char var_17 = (unsigned char)170;
unsigned short var_18 = (unsigned short)20178;
unsigned short arr_1 [11] [11] ;
unsigned int arr_3 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)28104;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 219498218U : 2156951710U;
}

void checksum() {
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
