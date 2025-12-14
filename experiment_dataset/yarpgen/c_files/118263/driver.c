#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 3161060743078595794ULL;
long long int var_3 = -4407869203034788588LL;
signed char var_4 = (signed char)-102;
long long int var_7 = 7206814264688150515LL;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 312457415U;
short var_16 = (short)27587;
signed char var_17 = (signed char)-71;
unsigned int var_18 = 4027753466U;
short arr_0 [14] ;
int arr_1 [14] ;
long long int arr_4 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (short)-15617;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? -144287435 : 812649954;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = 3002868149663379119LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
