#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-4339;
unsigned long long int var_3 = 6499653229645813349ULL;
short var_4 = (short)26989;
int var_5 = -1156216865;
int var_7 = 1968943920;
unsigned char var_9 = (unsigned char)185;
unsigned long long int var_14 = 14241028758889203467ULL;
int zero = 0;
long long int var_17 = -4445775057507821677LL;
signed char var_18 = (signed char)-82;
signed char arr_0 [12] ;
unsigned int arr_3 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (signed char)-86;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 2426152489U : 2798041214U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
