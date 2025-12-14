#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -6849777572923195517LL;
long long int var_7 = -3236374572001565948LL;
unsigned long long int var_13 = 3179236668316857485ULL;
short var_14 = (short)-32183;
int zero = 0;
short var_15 = (short)3235;
long long int var_16 = -6787427802054002763LL;
signed char var_17 = (signed char)-14;
unsigned short var_18 = (unsigned short)64207;
unsigned int var_19 = 14063683U;
unsigned int arr_3 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 468280556U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
