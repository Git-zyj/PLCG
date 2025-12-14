#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2451053195U;
_Bool var_2 = (_Bool)1;
short var_4 = (short)-27534;
unsigned short var_5 = (unsigned short)51396;
signed char var_7 = (signed char)116;
signed char var_10 = (signed char)-31;
long long int var_14 = -7597333689591756348LL;
short var_16 = (short)-28505;
int zero = 0;
unsigned short var_18 = (unsigned short)31176;
unsigned long long int var_19 = 7297310120222154179ULL;
long long int var_20 = -6107028922890727512LL;
unsigned int arr_3 [14] ;
long long int arr_2 [17] ;
unsigned char arr_6 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 1518553747U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = -7636692712532814091LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)236;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
