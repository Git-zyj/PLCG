#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-10829;
unsigned long long int var_2 = 4446602085271796789ULL;
_Bool var_4 = (_Bool)1;
long long int var_6 = 8515393586050764523LL;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)4084;
int zero = 0;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)7;
short var_14 = (short)31276;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)0;
short arr_0 [17] [17] ;
_Bool arr_1 [17] [17] ;
_Bool arr_2 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-9517;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
