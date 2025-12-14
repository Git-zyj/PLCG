#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7807219862241085382LL;
signed char var_4 = (signed char)84;
unsigned char var_7 = (unsigned char)62;
int zero = 0;
unsigned short var_10 = (unsigned short)18786;
long long int var_11 = -9191807835113288043LL;
signed char var_12 = (signed char)-91;
short var_13 = (short)-21455;
short var_14 = (short)-9082;
short arr_0 [17] ;
signed char arr_3 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (short)15167;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (signed char)-30;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
