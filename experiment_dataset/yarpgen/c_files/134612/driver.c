#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_3 = 13028326485702196416ULL;
unsigned short var_8 = (unsigned short)9306;
unsigned long long int var_12 = 4507828779836708769ULL;
signed char var_15 = (signed char)-84;
long long int var_17 = 8474108967599313084LL;
unsigned short var_19 = (unsigned short)7279;
int zero = 0;
unsigned long long int var_20 = 8311465105518395866ULL;
unsigned char var_21 = (unsigned char)224;
signed char var_22 = (signed char)42;
signed char var_23 = (signed char)18;
short arr_0 [25] [25] ;
unsigned long long int arr_1 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-32709;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 13211650553923367044ULL;
}

void checksum() {
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
