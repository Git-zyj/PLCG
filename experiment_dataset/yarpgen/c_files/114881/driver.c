#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_12 = 2092537423566461299ULL;
long long int var_14 = 1457783417389051810LL;
unsigned long long int var_15 = 14239182154795441969ULL;
long long int var_16 = -4634910426733350546LL;
int zero = 0;
unsigned int var_20 = 1133953102U;
unsigned int var_21 = 2252014564U;
unsigned int var_22 = 1648109486U;
unsigned long long int var_23 = 12859083008115145827ULL;
unsigned int var_24 = 112680979U;
short var_25 = (short)28587;
unsigned int var_26 = 1954422843U;
unsigned int var_27 = 2742533654U;
unsigned int var_28 = 836328674U;
_Bool arr_1 [12] ;
long long int arr_3 [12] [12] ;
unsigned int arr_6 [12] [12] ;
long long int arr_7 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = 6908789884832768775LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_6 [i_0] [i_1] = 1491647293U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 7176718482242904217LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
