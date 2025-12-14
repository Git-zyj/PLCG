#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-29091;
unsigned int var_1 = 4059829941U;
_Bool var_2 = (_Bool)0;
int var_3 = 1085404158;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 2316649557U;
unsigned char var_6 = (unsigned char)24;
short var_15 = (short)26368;
int zero = 0;
short var_16 = (short)15178;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)83;
int var_19 = -1459333775;
long long int var_20 = 2669765288881939116LL;
unsigned char arr_1 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned char)18 : (unsigned char)199;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
