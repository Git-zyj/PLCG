#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)109;
unsigned short var_6 = (unsigned short)8444;
_Bool var_11 = (_Bool)1;
long long int var_14 = 1361248172492958122LL;
int zero = 0;
short var_18 = (short)-14519;
unsigned long long int var_19 = 12206740433276890168ULL;
signed char var_20 = (signed char)-80;
long long int var_21 = -1880093465408472692LL;
long long int var_22 = 4115914672361200219LL;
short var_23 = (short)-11584;
unsigned short arr_11 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (unsigned short)38941 : (unsigned short)11458;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
