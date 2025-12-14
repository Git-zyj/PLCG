#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3945643724430971256ULL;
long long int var_7 = -266242068999406761LL;
unsigned char var_14 = (unsigned char)145;
unsigned short var_16 = (unsigned short)17047;
int zero = 0;
unsigned long long int var_17 = 511278898421801954ULL;
unsigned short var_18 = (unsigned short)48459;
unsigned long long int var_19 = 5827372984837407415ULL;
unsigned char var_20 = (unsigned char)48;
int var_21 = 530007246;
int var_22 = -1197936057;
unsigned long long int var_23 = 10898591230199090234ULL;
signed char var_24 = (signed char)64;
unsigned long long int var_25 = 4602062249537917295ULL;
unsigned long long int var_26 = 681956930168453286ULL;
unsigned long long int var_27 = 10957454377006355989ULL;
long long int arr_0 [20] ;
unsigned long long int arr_1 [20] [20] ;
unsigned long long int arr_5 [20] [20] ;
short arr_6 [20] [20] ;
unsigned long long int arr_8 [20] [20] ;
unsigned char arr_14 [20] [20] [20] ;
unsigned long long int arr_16 [20] ;
long long int arr_2 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? -6780686078333601168LL : 6932768563081664930LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = 2747479859015955886ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = 4967210907506307178ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_6 [i_0] [i_1] = (short)-21188;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_8 [i_0] [i_1] = 16295869230816615527ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (unsigned char)164;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_16 [i_0] = 5861951788092272478ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 2249559871188608030LL : -111069201186347710LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
