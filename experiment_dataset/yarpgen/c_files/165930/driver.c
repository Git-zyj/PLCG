#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)8520;
short var_4 = (short)14236;
int var_11 = 1081369315;
int zero = 0;
unsigned char var_16 = (unsigned char)165;
signed char var_17 = (signed char)83;
unsigned long long int var_18 = 5614165790463882904ULL;
unsigned long long int var_19 = 15798167342730689363ULL;
long long int var_20 = -476669464999325318LL;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)0;
int arr_0 [21] ;
long long int arr_1 [21] ;
unsigned int arr_6 [21] ;
_Bool arr_7 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 1805601693;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = -8399315681599384130LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = 1369694641U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_7 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
