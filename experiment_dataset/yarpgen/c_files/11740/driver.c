#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)154;
int zero = 0;
signed char var_13 = (signed char)96;
short var_14 = (short)-15172;
signed char var_15 = (signed char)-124;
signed char var_16 = (signed char)126;
unsigned short var_17 = (unsigned short)48033;
unsigned short var_18 = (unsigned short)31546;
long long int var_19 = 8184025494245121796LL;
unsigned int var_20 = 3859520002U;
unsigned long long int var_21 = 5298132870250397241ULL;
int arr_1 [12] ;
int arr_3 [19] ;
short arr_4 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 499441614;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = -2111092473;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (short)-14437;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
