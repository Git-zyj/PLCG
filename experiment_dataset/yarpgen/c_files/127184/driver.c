#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 14119041475530936895ULL;
signed char var_6 = (signed char)-11;
long long int var_7 = -4751970848149457213LL;
int zero = 0;
unsigned long long int var_20 = 11766538168805428928ULL;
long long int var_21 = -7343055696324236618LL;
unsigned int var_22 = 4254776879U;
int var_23 = 285848659;
unsigned short var_24 = (unsigned short)34540;
unsigned int var_25 = 4204016352U;
_Bool arr_3 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (_Bool)1;
}

void checksum() {
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
