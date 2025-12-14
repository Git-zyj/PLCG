#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)32;
_Bool var_6 = (_Bool)0;
unsigned long long int var_8 = 12874380402612381842ULL;
unsigned int var_9 = 2453699568U;
unsigned long long int var_10 = 16998774956529428966ULL;
short var_12 = (short)8710;
int zero = 0;
int var_13 = 2100288805;
unsigned short var_14 = (unsigned short)4909;
unsigned long long int var_15 = 5882962128866677779ULL;
unsigned long long int var_16 = 15562302630109063932ULL;
unsigned short var_17 = (unsigned short)39384;
long long int arr_1 [13] ;
signed char arr_2 [13] [13] [13] ;
unsigned long long int arr_6 [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = -6944131997349894115LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (signed char)51;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 14110075896687975538ULL : 12895833472269721781ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
