#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)8150;
signed char var_3 = (signed char)-29;
unsigned short var_4 = (unsigned short)33109;
unsigned short var_6 = (unsigned short)63538;
signed char var_7 = (signed char)-117;
_Bool var_8 = (_Bool)0;
unsigned short var_10 = (unsigned short)65075;
int zero = 0;
signed char var_11 = (signed char)-8;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)39241;
_Bool var_14 = (_Bool)0;
unsigned short arr_1 [18] ;
unsigned long long int arr_2 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (unsigned short)15045;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 11329641576632973542ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
