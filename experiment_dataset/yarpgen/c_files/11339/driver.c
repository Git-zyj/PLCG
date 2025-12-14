#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)34040;
unsigned short var_11 = (unsigned short)51254;
unsigned long long int var_16 = 15715210430567951215ULL;
unsigned long long int var_19 = 3401206008762784437ULL;
int zero = 0;
unsigned long long int var_20 = 10185032349841761836ULL;
unsigned int var_21 = 113174288U;
unsigned short var_22 = (unsigned short)14611;
unsigned int var_23 = 361362986U;
unsigned int var_24 = 1084161426U;
int arr_1 [14] ;
unsigned short arr_3 [14] [14] ;
unsigned short arr_4 [14] [14] ;
unsigned short arr_5 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 1043587617;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)32791;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)62106;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (unsigned short)6938;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
