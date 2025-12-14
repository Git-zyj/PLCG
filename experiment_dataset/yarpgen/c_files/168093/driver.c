#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 590789633;
int var_1 = -480218797;
long long int var_3 = 7764668604806228839LL;
int var_4 = -1370973758;
unsigned int var_7 = 1243948158U;
short var_8 = (short)9807;
int var_10 = 1518914695;
int zero = 0;
unsigned long long int var_11 = 8238913306766363490ULL;
short var_12 = (short)-13015;
signed char var_13 = (signed char)-104;
unsigned short var_14 = (unsigned short)53913;
unsigned long long int var_15 = 16656266377051958782ULL;
unsigned char var_16 = (unsigned char)112;
short arr_0 [13] ;
_Bool arr_1 [13] ;
int arr_2 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (short)-11004;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 1374869840;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
