#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)122;
_Bool var_8 = (_Bool)0;
long long int var_9 = 6806024081136658047LL;
unsigned char var_10 = (unsigned char)18;
long long int var_12 = -6422175964663902103LL;
int zero = 0;
long long int var_15 = 2288428514596342065LL;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)42295;
short var_18 = (short)-28243;
long long int var_19 = 6430097259325642940LL;
signed char arr_0 [16] ;
long long int arr_1 [16] [16] ;
unsigned char arr_2 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (signed char)-114;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = -3175494211969312678LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)143;
}

void checksum() {
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
