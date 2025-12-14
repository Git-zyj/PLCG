#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)2621;
unsigned long long int var_2 = 8027379966173680934ULL;
long long int var_4 = 8317666722884161189LL;
int var_6 = 1122429735;
_Bool var_8 = (_Bool)0;
int zero = 0;
unsigned char var_10 = (unsigned char)107;
unsigned short var_11 = (unsigned short)15311;
unsigned char var_12 = (unsigned char)221;
unsigned char arr_4 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (unsigned char)101;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
