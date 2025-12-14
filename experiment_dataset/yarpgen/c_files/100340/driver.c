#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1795443963;
unsigned long long int var_1 = 18180176159106789623ULL;
unsigned int var_4 = 1215072793U;
int var_7 = 782000758;
_Bool var_8 = (_Bool)1;
unsigned char var_11 = (unsigned char)215;
unsigned long long int var_12 = 2429865840800723757ULL;
int var_14 = -434442214;
unsigned int var_17 = 1559385708U;
unsigned long long int var_18 = 5537648233940879024ULL;
int zero = 0;
unsigned long long int var_19 = 14076867596804145297ULL;
unsigned char var_20 = (unsigned char)144;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 17356185037218296756ULL;
unsigned long long int arr_0 [10] ;
int arr_1 [10] [10] ;
unsigned char arr_3 [10] ;
_Bool arr_4 [10] ;
unsigned int arr_5 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 12610427713148036404ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = -714430216;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (unsigned char)88;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = 2978057252U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
