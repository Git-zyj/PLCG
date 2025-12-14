#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3278164344U;
unsigned long long int var_2 = 4599615341745325084ULL;
short var_3 = (short)-29038;
long long int var_7 = 3192600953304814938LL;
int var_8 = -108282914;
unsigned int var_10 = 2383610430U;
unsigned long long int var_11 = 4025266930773311388ULL;
unsigned char var_13 = (unsigned char)219;
unsigned char var_14 = (unsigned char)144;
int zero = 0;
unsigned int var_15 = 4165218615U;
unsigned char var_16 = (unsigned char)125;
unsigned char var_17 = (unsigned char)218;
unsigned long long int var_18 = 15807987388046052122ULL;
unsigned long long int var_19 = 5361849610993456228ULL;
int arr_1 [15] ;
unsigned int arr_2 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 1016599837 : -227254498;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 1593347849U : 3952817608U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
