#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)53;
unsigned int var_3 = 3776877081U;
unsigned char var_5 = (unsigned char)129;
unsigned int var_6 = 1402792094U;
int var_7 = 1754084640;
unsigned char var_9 = (unsigned char)102;
int var_11 = -243112275;
int var_12 = 476308430;
unsigned int var_14 = 2189543218U;
int zero = 0;
unsigned char var_18 = (unsigned char)113;
unsigned int var_19 = 936354956U;
unsigned int var_20 = 3639619534U;
unsigned char var_21 = (unsigned char)180;
int var_22 = 431252508;
unsigned int var_23 = 510002425U;
unsigned int arr_0 [13] ;
unsigned int arr_1 [13] ;
int arr_2 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 1369287717U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 4273569933U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = -950099807;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
