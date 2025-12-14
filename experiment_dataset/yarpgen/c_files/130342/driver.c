#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)193;
unsigned int var_4 = 1363174515U;
signed char var_7 = (signed char)-29;
unsigned long long int var_10 = 2624499566012266885ULL;
int var_18 = -444677840;
int zero = 0;
long long int var_20 = -8881037585770647796LL;
unsigned int var_21 = 638300312U;
short var_22 = (short)-30633;
unsigned char var_23 = (unsigned char)211;
unsigned int arr_0 [21] [21] ;
unsigned char arr_1 [21] ;
signed char arr_4 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = 2550741146U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned char)195 : (unsigned char)110;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (signed char)58 : (signed char)-20;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
