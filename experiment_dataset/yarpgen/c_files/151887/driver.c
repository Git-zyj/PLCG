#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3365557961U;
unsigned int var_2 = 3513165985U;
unsigned char var_3 = (unsigned char)134;
unsigned long long int var_7 = 13708372045351144051ULL;
unsigned long long int var_8 = 7310782944008924886ULL;
unsigned char var_10 = (unsigned char)144;
unsigned char var_12 = (unsigned char)255;
int zero = 0;
unsigned long long int var_14 = 5910876031304375605ULL;
long long int var_15 = 1572932911422365544LL;
short var_16 = (short)11956;
long long int var_17 = 1954369390809517836LL;
short var_18 = (short)-3892;
int arr_1 [17] ;
short arr_3 [17] [17] [17] ;
long long int arr_4 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 1523167213;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (short)25400;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -8218991615082258673LL : 3823523530027376569LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
