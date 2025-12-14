#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -5420687760977701730LL;
unsigned short var_3 = (unsigned short)26592;
signed char var_4 = (signed char)35;
signed char var_7 = (signed char)92;
int var_9 = 1975460785;
short var_10 = (short)18754;
int zero = 0;
signed char var_14 = (signed char)-42;
unsigned long long int var_15 = 12600726737847388421ULL;
long long int var_16 = 7073358716180555541LL;
short arr_0 [19] ;
int arr_1 [19] ;
short arr_2 [19] [19] ;
_Bool arr_3 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (short)15158;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 1476913503;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-3640;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
}

void checksum() {
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
