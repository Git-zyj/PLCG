#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2026188914578845670ULL;
unsigned char var_2 = (unsigned char)102;
unsigned char var_3 = (unsigned char)124;
unsigned int var_6 = 1949977593U;
unsigned char var_7 = (unsigned char)92;
_Bool var_8 = (_Bool)0;
int zero = 0;
int var_10 = -1909918161;
int var_11 = 1693649169;
unsigned short var_12 = (unsigned short)48051;
unsigned int var_13 = 955001640U;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)161;
unsigned int arr_1 [20] ;
unsigned char arr_6 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 397237025U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)51 : (unsigned char)244;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
