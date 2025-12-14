#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 381030033;
long long int var_1 = 6171563658221220101LL;
unsigned short var_11 = (unsigned short)28612;
unsigned char var_12 = (unsigned char)243;
short var_13 = (short)-19533;
int zero = 0;
_Bool var_17 = (_Bool)1;
long long int var_18 = 480943230630954200LL;
signed char var_19 = (signed char)-11;
unsigned short arr_5 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned short)48751 : (unsigned short)58686;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
