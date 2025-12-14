#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -6479154968463155286LL;
unsigned long long int var_4 = 13355052853208986120ULL;
int var_5 = 1545162190;
unsigned int var_7 = 1598176656U;
unsigned int var_8 = 1431024958U;
int zero = 0;
int var_13 = -2108193586;
unsigned long long int var_14 = 6803850111642338513ULL;
long long int var_15 = 8045236096818529024LL;
unsigned char var_16 = (unsigned char)175;
short var_17 = (short)8105;
unsigned int var_18 = 3642807285U;
short var_19 = (short)31591;
signed char var_20 = (signed char)-65;
unsigned int arr_1 [15] [15] ;
signed char arr_2 [15] ;
signed char arr_3 [15] ;
unsigned int arr_5 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = 3616918188U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (signed char)-98;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (signed char)-95;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 2164695258U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
