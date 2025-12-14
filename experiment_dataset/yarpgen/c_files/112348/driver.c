#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 172376536057652782ULL;
_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)75;
unsigned int var_4 = 2040151202U;
unsigned short var_5 = (unsigned short)13859;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)6592;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 3958192491U;
unsigned int var_10 = 3799769485U;
unsigned long long int var_11 = 5904028736053669735ULL;
int zero = 0;
unsigned long long int var_13 = 16674243520493076258ULL;
unsigned int var_14 = 4237303913U;
long long int var_15 = -1519930210016552850LL;
long long int var_16 = -1357637103954984590LL;
_Bool var_17 = (_Bool)1;
int var_18 = -2116985527;
unsigned long long int arr_0 [24] ;
unsigned long long int arr_2 [24] ;
long long int arr_3 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 4343131407698640099ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 11690477854769958066ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -8528297654256890951LL;
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
