#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)12390;
signed char var_3 = (signed char)-52;
long long int var_6 = -6812192752032577383LL;
unsigned char var_9 = (unsigned char)145;
unsigned long long int var_11 = 11255331300521899513ULL;
unsigned char var_14 = (unsigned char)136;
int zero = 0;
unsigned int var_20 = 3686107675U;
unsigned short var_21 = (unsigned short)54487;
unsigned char var_22 = (unsigned char)134;
unsigned int var_23 = 1538930543U;
unsigned int arr_1 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = 3020420250U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
