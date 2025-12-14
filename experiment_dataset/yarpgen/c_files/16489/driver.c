#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)49197;
signed char var_4 = (signed char)77;
int var_6 = 1917365954;
unsigned long long int var_10 = 5638465177093904762ULL;
unsigned long long int var_13 = 14626681412843368836ULL;
signed char var_16 = (signed char)-127;
unsigned long long int var_17 = 18042926520797369903ULL;
int var_18 = -807348030;
int zero = 0;
unsigned char var_19 = (unsigned char)101;
unsigned long long int var_20 = 10497151722045547584ULL;
short var_21 = (short)7061;
long long int var_22 = -3188858274602806959LL;
unsigned char var_23 = (unsigned char)241;
unsigned short var_24 = (unsigned short)33697;
long long int var_25 = 474969008699098934LL;
_Bool arr_0 [24] ;
long long int arr_1 [24] [24] ;
int arr_6 [24] ;
_Bool arr_11 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = 3494532643841440089LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = -661380806;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_11 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
