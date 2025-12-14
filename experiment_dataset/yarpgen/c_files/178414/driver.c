#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 14467095322033073457ULL;
unsigned long long int var_4 = 10906370424991173043ULL;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 3636619164736076396ULL;
short var_7 = (short)20111;
unsigned short var_10 = (unsigned short)58110;
int zero = 0;
unsigned char var_11 = (unsigned char)209;
long long int var_12 = -6503221707927049750LL;
unsigned long long int var_13 = 6560833642363547805ULL;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)131;
short arr_0 [13] ;
_Bool arr_1 [13] ;
_Bool arr_2 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (short)-12084;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
