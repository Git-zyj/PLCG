#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-14664;
unsigned int var_7 = 2823703017U;
unsigned int var_8 = 4177317206U;
long long int var_9 = -3139557145030680330LL;
_Bool var_10 = (_Bool)0;
short var_13 = (short)11939;
short var_19 = (short)625;
int zero = 0;
unsigned long long int var_20 = 200381897401769375ULL;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 1429001894U;
signed char var_23 = (signed char)59;
int var_24 = -1682285543;
short var_25 = (short)3845;
int arr_2 [11] ;
signed char arr_3 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = -1628994528;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-119;
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
