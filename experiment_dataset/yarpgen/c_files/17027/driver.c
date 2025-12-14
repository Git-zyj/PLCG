#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5089230860535783759ULL;
short var_1 = (short)19624;
_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)48;
unsigned int var_5 = 3550464243U;
unsigned long long int var_6 = 8456764801943241068ULL;
unsigned short var_7 = (unsigned short)29231;
unsigned int var_8 = 2032359947U;
unsigned int var_11 = 1822531165U;
int zero = 0;
int var_12 = -711965999;
signed char var_13 = (signed char)-76;
unsigned char var_14 = (unsigned char)230;
unsigned short var_15 = (unsigned short)3976;
signed char var_16 = (signed char)-28;
unsigned char arr_0 [19] ;
signed char arr_2 [19] [19] ;
int arr_3 [19] ;
unsigned char arr_5 [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (unsigned char)132;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)15;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = -1942757197;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (unsigned char)243;
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
