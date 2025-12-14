#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)230;
int var_1 = -382685305;
short var_5 = (short)8983;
short var_8 = (short)6237;
unsigned int var_9 = 1601182763U;
int zero = 0;
signed char var_12 = (signed char)103;
unsigned short var_13 = (unsigned short)20640;
short var_14 = (short)27768;
signed char var_15 = (signed char)-125;
unsigned short var_16 = (unsigned short)48505;
unsigned int var_17 = 2583901295U;
unsigned long long int arr_0 [20] [20] ;
unsigned short arr_2 [20] ;
long long int arr_3 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = 13000007937268682099ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (unsigned short)5181;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = -2494955265774831220LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
