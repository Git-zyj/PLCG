#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)53079;
signed char var_1 = (signed char)91;
short var_5 = (short)30086;
long long int var_7 = 7066474324725793817LL;
short var_8 = (short)-1801;
int zero = 0;
unsigned char var_10 = (unsigned char)138;
signed char var_11 = (signed char)-107;
long long int var_12 = 565441731002442430LL;
signed char var_13 = (signed char)-59;
unsigned long long int var_14 = 9078250969811429403ULL;
_Bool arr_4 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
