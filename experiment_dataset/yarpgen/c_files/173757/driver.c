#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)63;
unsigned long long int var_2 = 9017120927717240631ULL;
unsigned long long int var_9 = 9918575706061503705ULL;
unsigned char var_12 = (unsigned char)51;
short var_16 = (short)-24830;
unsigned int var_17 = 3183980010U;
unsigned long long int var_18 = 1584553206720356282ULL;
int zero = 0;
signed char var_19 = (signed char)-39;
unsigned int var_20 = 2746720963U;
unsigned int var_21 = 1861038323U;
short var_22 = (short)29958;
unsigned char var_23 = (unsigned char)171;
signed char arr_8 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = (signed char)-40;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
