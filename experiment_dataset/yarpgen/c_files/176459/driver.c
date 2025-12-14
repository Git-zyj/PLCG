#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)37598;
unsigned long long int var_3 = 8358069841951903366ULL;
long long int var_6 = 1958828395408214821LL;
short var_8 = (short)21576;
unsigned long long int var_9 = 12346358338207673565ULL;
int zero = 0;
short var_12 = (short)28213;
signed char var_13 = (signed char)28;
unsigned short var_14 = (unsigned short)25385;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)8191;
long long int var_17 = -3980224729485193799LL;
int arr_0 [17] ;
unsigned short arr_1 [17] ;
short arr_2 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 392731511;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned short)19632 : (unsigned short)21125;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)-19687 : (short)7328;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
