#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)56467;
unsigned char var_1 = (unsigned char)27;
unsigned int var_2 = 613532902U;
unsigned short var_4 = (unsigned short)52357;
unsigned short var_6 = (unsigned short)40543;
unsigned short var_12 = (unsigned short)14813;
int var_16 = -375593981;
int zero = 0;
unsigned short var_17 = (unsigned short)47322;
signed char var_18 = (signed char)-5;
unsigned int var_19 = 1624214453U;
unsigned short arr_0 [16] ;
signed char arr_1 [16] [16] ;
unsigned int arr_2 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned short)18940;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)32;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 2355935267U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
