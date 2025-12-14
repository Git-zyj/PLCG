#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)596;
unsigned long long int var_9 = 6871954570183574706ULL;
unsigned long long int var_13 = 18072906305623487854ULL;
unsigned short var_16 = (unsigned short)22678;
int zero = 0;
unsigned short var_17 = (unsigned short)14337;
unsigned short var_18 = (unsigned short)2587;
unsigned long long int var_19 = 472247176010551637ULL;
unsigned long long int var_20 = 15799369191986056746ULL;
unsigned long long int var_21 = 10972868536755868569ULL;
unsigned long long int var_22 = 4456676077609308937ULL;
unsigned short var_23 = (unsigned short)45206;
unsigned long long int var_24 = 14691477586954755116ULL;
unsigned short arr_12 [20] [20] [20] ;
unsigned long long int arr_17 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)55977 : (unsigned short)27851;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_17 [i_0] = 3810973118450388873ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
