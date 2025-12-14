#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8647923427480362114LL;
unsigned short var_2 = (unsigned short)62631;
int var_5 = -1624518623;
unsigned short var_7 = (unsigned short)56576;
long long int var_9 = -4306008389841522708LL;
int zero = 0;
unsigned short var_13 = (unsigned short)11592;
long long int var_14 = 1399643098647413803LL;
unsigned long long int var_15 = 15096610459913265902ULL;
unsigned short var_16 = (unsigned short)4687;
unsigned short arr_0 [12] ;
long long int arr_5 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)46850 : (unsigned short)29293;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 1209783785640308681LL : -872821498627117933LL;
}

void checksum() {
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
