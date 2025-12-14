#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)63792;
int var_1 = -736925548;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 948510010U;
int var_12 = -1459867694;
signed char var_14 = (signed char)27;
signed char var_16 = (signed char)31;
int zero = 0;
int var_18 = 319895403;
unsigned long long int var_19 = 1904952846484815834ULL;
int var_20 = -2056684639;
short var_21 = (short)-9033;
int var_22 = 2094021631;
unsigned int var_23 = 1489154503U;
unsigned char var_24 = (unsigned char)97;
short var_25 = (short)-29032;
unsigned long long int arr_0 [15] ;
unsigned int arr_1 [15] ;
int arr_2 [20] [20] ;
long long int arr_3 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 15061565540003037735ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 3709878932U : 4189070791U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? 1844587810 : 1174390302;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 3099899298949640730LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
