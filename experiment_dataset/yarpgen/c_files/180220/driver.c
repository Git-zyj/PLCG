#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2150251784U;
signed char var_6 = (signed char)-127;
signed char var_7 = (signed char)-125;
signed char var_8 = (signed char)-17;
int zero = 0;
unsigned short var_11 = (unsigned short)29199;
int var_12 = 1025047428;
unsigned int var_13 = 782879414U;
signed char var_14 = (signed char)89;
signed char var_15 = (signed char)-37;
unsigned int var_16 = 595536527U;
signed char arr_1 [21] ;
unsigned int arr_2 [21] [21] ;
unsigned short arr_3 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (signed char)74;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = 2438874137U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (unsigned short)50583;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
