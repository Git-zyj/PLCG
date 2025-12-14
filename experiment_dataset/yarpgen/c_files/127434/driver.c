#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3380378608U;
signed char var_5 = (signed char)-4;
unsigned long long int var_8 = 18227826873373314443ULL;
unsigned char var_11 = (unsigned char)90;
unsigned int var_15 = 2665092365U;
unsigned short var_16 = (unsigned short)32208;
int zero = 0;
unsigned int var_17 = 2889442663U;
long long int var_18 = -7254280412416619676LL;
unsigned short var_19 = (unsigned short)9692;
short var_20 = (short)-1329;
_Bool arr_0 [10] [10] ;
unsigned char arr_1 [10] ;
signed char arr_2 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned char)227;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (signed char)-79;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
