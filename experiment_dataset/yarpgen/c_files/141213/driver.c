#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)120;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)244;
unsigned char var_7 = (unsigned char)135;
unsigned long long int var_8 = 12458377085861707834ULL;
unsigned char var_10 = (unsigned char)52;
int zero = 0;
unsigned char var_12 = (unsigned char)85;
signed char var_13 = (signed char)122;
long long int var_14 = -1294589142325538955LL;
int var_15 = 1732144281;
_Bool arr_0 [25] ;
_Bool arr_1 [25] ;
unsigned char arr_3 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (unsigned char)147;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
