#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)43843;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)57235;
unsigned short var_4 = (unsigned short)20402;
long long int var_5 = 7671939592392853793LL;
unsigned long long int var_9 = 1507458020437338051ULL;
signed char var_13 = (signed char)31;
int zero = 0;
unsigned long long int var_16 = 11707681147633610075ULL;
unsigned long long int var_17 = 17375974052954129045ULL;
unsigned short var_18 = (unsigned short)15807;
unsigned int var_19 = 3636335545U;
signed char arr_2 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (signed char)124;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
