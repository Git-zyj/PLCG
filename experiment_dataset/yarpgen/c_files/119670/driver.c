#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4808479500308259515ULL;
short var_3 = (short)-13699;
unsigned long long int var_4 = 6967553494762734949ULL;
unsigned short var_7 = (unsigned short)59303;
short var_8 = (short)13238;
unsigned short var_9 = (unsigned short)19089;
int zero = 0;
unsigned short var_12 = (unsigned short)51049;
unsigned long long int var_13 = 4943297336905326819ULL;
unsigned short var_14 = (unsigned short)32908;
signed char var_15 = (signed char)-116;
unsigned short arr_2 [24] ;
unsigned short arr_3 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (unsigned short)21052;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (unsigned short)18479;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
