#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 250484640;
unsigned long long int var_1 = 1078673256571246672ULL;
_Bool var_2 = (_Bool)0;
long long int var_3 = -3176173489178895147LL;
signed char var_5 = (signed char)-89;
_Bool var_6 = (_Bool)0;
long long int var_9 = -1106320328959239885LL;
_Bool var_10 = (_Bool)1;
long long int var_13 = 8602376414901948430LL;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 2918767458U;
unsigned char var_18 = (unsigned char)139;
_Bool var_19 = (_Bool)1;
_Bool arr_0 [19] ;
unsigned char arr_3 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (unsigned char)158;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
