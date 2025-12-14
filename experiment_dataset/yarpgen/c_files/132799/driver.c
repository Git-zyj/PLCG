#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)26903;
signed char var_13 = (signed char)70;
signed char var_14 = (signed char)0;
unsigned long long int var_15 = 12732938101175645561ULL;
int zero = 0;
unsigned int var_17 = 1879702846U;
unsigned int var_18 = 652482205U;
unsigned long long int var_19 = 853739719426092278ULL;
unsigned long long int var_20 = 2921036409374586742ULL;
unsigned int var_21 = 1462720131U;
long long int var_22 = 2932591416923950775LL;
_Bool arr_0 [22] ;
signed char arr_3 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (signed char)72;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
