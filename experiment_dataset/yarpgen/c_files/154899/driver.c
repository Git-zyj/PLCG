#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 8673917720084410485ULL;
unsigned short var_5 = (unsigned short)54648;
signed char var_6 = (signed char)-10;
unsigned long long int var_7 = 3591829449881910847ULL;
int var_8 = 1287594102;
int zero = 0;
signed char var_12 = (signed char)-111;
signed char var_13 = (signed char)-19;
unsigned int var_14 = 2195723193U;
unsigned char var_15 = (unsigned char)34;
unsigned long long int var_16 = 13840178822917889980ULL;
int arr_0 [12] [12] ;
_Bool arr_1 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = -666420747;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
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
