#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 5649557039714117712ULL;
unsigned int var_5 = 418474727U;
unsigned long long int var_7 = 273724250684198016ULL;
unsigned short var_8 = (unsigned short)59493;
int zero = 0;
short var_12 = (short)18291;
unsigned int var_13 = 188442510U;
signed char var_14 = (signed char)120;
signed char var_15 = (signed char)65;
signed char arr_3 [12] [12] ;
unsigned long long int arr_7 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)78;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 13935047553937495571ULL : 10208474191155249725ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
