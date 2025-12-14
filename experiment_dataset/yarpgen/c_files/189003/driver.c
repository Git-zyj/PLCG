#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4646363604482409560ULL;
int var_3 = 1328859396;
unsigned short var_4 = (unsigned short)18694;
_Bool var_5 = (_Bool)0;
int zero = 0;
_Bool var_10 = (_Bool)0;
int var_11 = 1342139343;
int var_12 = 1891702247;
unsigned short var_13 = (unsigned short)39482;
_Bool var_14 = (_Bool)1;
unsigned int arr_0 [23] ;
unsigned char arr_5 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 1839513156U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (unsigned char)157;
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
