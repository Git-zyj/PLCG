#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_3 = (unsigned short)63491;
signed char var_7 = (signed char)78;
long long int var_12 = -3616530128203119171LL;
int zero = 0;
unsigned long long int var_13 = 3154255711012729537ULL;
short var_14 = (short)-31837;
unsigned char var_15 = (unsigned char)67;
long long int var_16 = 2502416404648193439LL;
long long int var_17 = 5358886898933558633LL;
unsigned int var_18 = 2977631895U;
int arr_0 [13] ;
unsigned long long int arr_2 [13] ;
signed char arr_3 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? -1220023897 : -398792735;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 872009754209366069ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (signed char)-25;
}

void checksum() {
    hash(&seed, var_13);
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
