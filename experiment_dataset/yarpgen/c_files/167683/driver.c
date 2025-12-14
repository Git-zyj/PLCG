#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3323531198237616486ULL;
signed char var_2 = (signed char)75;
short var_3 = (short)-17810;
_Bool var_4 = (_Bool)1;
long long int var_8 = 6041484409474487995LL;
int var_10 = -66756002;
int zero = 0;
int var_11 = 241777839;
unsigned short var_12 = (unsigned short)24833;
unsigned char var_13 = (unsigned char)161;
short var_14 = (short)5908;
signed char arr_7 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (signed char)-13 : (signed char)-39;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
