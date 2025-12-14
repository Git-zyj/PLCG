#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3435409086519450537LL;
_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)69;
_Bool var_4 = (_Bool)1;
signed char var_7 = (signed char)-96;
unsigned char var_11 = (unsigned char)216;
signed char var_13 = (signed char)56;
signed char var_14 = (signed char)22;
int zero = 0;
unsigned int var_17 = 70050483U;
short var_18 = (short)514;
signed char var_19 = (signed char)-62;
int var_20 = 599142021;
short var_21 = (short)-30125;
unsigned int arr_0 [18] ;
_Bool arr_1 [18] ;
int arr_7 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 809691193U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = -1427249155;
}

void checksum() {
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
