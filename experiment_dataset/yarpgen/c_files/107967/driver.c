#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2706000782U;
int var_2 = 1520825780;
signed char var_6 = (signed char)-80;
short var_10 = (short)6944;
unsigned char var_11 = (unsigned char)65;
int zero = 0;
signed char var_12 = (signed char)123;
unsigned long long int var_13 = 5012203931015044231ULL;
short var_14 = (short)-6595;
unsigned long long int var_15 = 12251056487179450484ULL;
unsigned int var_16 = 687659003U;
unsigned long long int var_17 = 3115736716109669231ULL;
short arr_1 [10] [10] ;
unsigned short arr_3 [10] [10] ;
_Bool arr_4 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (short)31479;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)49717;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
