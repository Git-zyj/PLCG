#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3042806626U;
int var_1 = 549725385;
unsigned int var_4 = 1776599038U;
unsigned int var_6 = 1518778712U;
unsigned char var_8 = (unsigned char)239;
short var_9 = (short)-11293;
unsigned long long int var_10 = 1078734759642448485ULL;
long long int var_11 = -5730686782456298934LL;
unsigned long long int var_12 = 11870628642188059066ULL;
unsigned int var_13 = 3708324193U;
int zero = 0;
short var_14 = (short)20019;
unsigned short var_15 = (unsigned short)48174;
unsigned int var_16 = 1482034604U;
unsigned char var_17 = (unsigned char)84;
unsigned short var_18 = (unsigned short)21913;
unsigned long long int var_19 = 12903687800390905668ULL;
unsigned short var_20 = (unsigned short)48781;
signed char arr_1 [24] [24] ;
_Bool arr_2 [24] ;
int arr_3 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-47;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 1911533106;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
