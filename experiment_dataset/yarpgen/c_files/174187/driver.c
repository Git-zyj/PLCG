#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-74;
unsigned int var_3 = 3279836569U;
short var_5 = (short)-25533;
unsigned char var_11 = (unsigned char)71;
short var_12 = (short)-15998;
short var_14 = (short)-6606;
int zero = 0;
unsigned int var_15 = 1229657289U;
long long int var_16 = -6871123852061082958LL;
signed char var_17 = (signed char)29;
unsigned int var_18 = 1544258770U;
unsigned short var_19 = (unsigned short)7455;
short var_20 = (short)-16440;
unsigned short arr_2 [13] ;
unsigned char arr_7 [22] ;
int arr_6 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (unsigned short)41777;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (unsigned char)30;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = 1329654923;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
