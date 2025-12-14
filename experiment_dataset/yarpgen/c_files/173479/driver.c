#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)4;
short var_3 = (short)30630;
signed char var_8 = (signed char)-117;
unsigned char var_11 = (unsigned char)84;
short var_12 = (short)-24296;
int var_13 = -1518932790;
short var_14 = (short)21517;
short var_15 = (short)-13378;
signed char var_16 = (signed char)16;
short var_17 = (short)32417;
int zero = 0;
signed char var_18 = (signed char)-16;
signed char var_19 = (signed char)-14;
unsigned int var_20 = 3791922231U;
unsigned char var_21 = (unsigned char)231;
short var_22 = (short)-21092;
int var_23 = -1115577040;
signed char arr_0 [25] ;
unsigned long long int arr_2 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (signed char)70 : (signed char)-49;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? 5477682052710968452ULL : 4589994787612542650ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
