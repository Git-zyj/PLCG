#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 414589360U;
unsigned long long int var_2 = 12219380755160264731ULL;
_Bool var_5 = (_Bool)1;
long long int var_6 = -5526477118377700238LL;
int var_10 = 226542466;
short var_11 = (short)-13336;
unsigned int var_12 = 3389002768U;
int zero = 0;
_Bool var_14 = (_Bool)1;
int var_15 = -468857106;
signed char var_16 = (signed char)-38;
signed char var_17 = (signed char)-56;
unsigned short var_18 = (unsigned short)53583;
_Bool arr_0 [24] ;
unsigned short arr_1 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned short)50868;
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
