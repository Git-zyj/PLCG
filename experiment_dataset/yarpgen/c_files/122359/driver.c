#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)18836;
unsigned long long int var_1 = 16283071716369596313ULL;
unsigned int var_2 = 1761896340U;
int var_4 = 2042589412;
unsigned int var_5 = 1358134604U;
long long int var_6 = -2077967198269221480LL;
long long int var_7 = -819091242727752004LL;
_Bool var_10 = (_Bool)1;
short var_12 = (short)1350;
int zero = 0;
short var_14 = (short)27167;
int var_15 = 419421017;
long long int var_16 = -4860415593301245765LL;
unsigned char var_17 = (unsigned char)110;
int arr_2 [18] ;
long long int arr_3 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 1300705193;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 4707277876495894770LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
