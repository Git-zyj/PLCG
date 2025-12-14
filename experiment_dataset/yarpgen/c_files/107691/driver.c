#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2727719835U;
unsigned long long int var_5 = 11431547743817016376ULL;
short var_6 = (short)28046;
short var_8 = (short)27531;
unsigned char var_11 = (unsigned char)4;
signed char var_13 = (signed char)-34;
int zero = 0;
unsigned char var_16 = (unsigned char)211;
unsigned int var_17 = 1638799276U;
long long int var_18 = -2001886486305354675LL;
unsigned short var_19 = (unsigned short)44428;
unsigned long long int var_20 = 14711663149484829166ULL;
long long int var_21 = -6897010112388950474LL;
unsigned long long int arr_0 [18] ;
unsigned long long int arr_1 [18] ;
short arr_2 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 464123164265415815ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 16469985523936865853ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (short)26649;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
