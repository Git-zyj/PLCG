#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-85;
long long int var_2 = 4289663957880201389LL;
unsigned long long int var_3 = 18237567950422476403ULL;
unsigned long long int var_6 = 8840008043190015048ULL;
unsigned char var_10 = (unsigned char)49;
unsigned short var_12 = (unsigned short)18567;
unsigned char var_13 = (unsigned char)5;
unsigned long long int var_14 = 1406898479881682320ULL;
long long int var_17 = 6021111307414766801LL;
int zero = 0;
signed char var_18 = (signed char)-31;
unsigned char var_19 = (unsigned char)17;
unsigned char var_20 = (unsigned char)114;
_Bool var_21 = (_Bool)1;
_Bool arr_1 [25] ;
unsigned int arr_2 [25] ;
unsigned short arr_3 [25] ;
unsigned long long int arr_4 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 3575972424U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (unsigned short)47720;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 3009218505884420680ULL : 5408514172373389085ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
