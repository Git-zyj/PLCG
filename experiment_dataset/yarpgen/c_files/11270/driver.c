#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1264442680;
_Bool var_8 = (_Bool)1;
unsigned int var_10 = 1991826242U;
unsigned short var_12 = (unsigned short)49568;
unsigned int var_17 = 2709685063U;
int var_18 = 1528943829;
int zero = 0;
unsigned char var_19 = (unsigned char)15;
unsigned long long int var_20 = 7828936171447016064ULL;
long long int var_21 = 1823474315633694021LL;
int arr_2 [21] [21] ;
unsigned int arr_9 [21] ;
unsigned short arr_10 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = 437969509;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = 3993741003U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)13376 : (unsigned short)31206;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
