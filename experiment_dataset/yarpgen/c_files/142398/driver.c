#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)20;
unsigned long long int var_1 = 13582252914848766919ULL;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)1;
unsigned short var_6 = (unsigned short)13131;
int var_7 = -806190066;
unsigned int var_8 = 992544406U;
_Bool var_9 = (_Bool)1;
int zero = 0;
signed char var_10 = (signed char)-26;
int var_11 = 1990495830;
unsigned short var_12 = (unsigned short)24109;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)-78;
int var_15 = 949951598;
unsigned char var_16 = (unsigned char)64;
unsigned char var_17 = (unsigned char)209;
signed char var_18 = (signed char)-126;
int arr_0 [21] ;
long long int arr_1 [21] ;
unsigned short arr_4 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = -1895152241;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = -7314256650176365012LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)53406;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
