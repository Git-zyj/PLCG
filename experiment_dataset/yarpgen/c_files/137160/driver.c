#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 967290623174337450ULL;
signed char var_4 = (signed char)-122;
short var_7 = (short)-19333;
unsigned char var_9 = (unsigned char)197;
unsigned char var_10 = (unsigned char)3;
unsigned int var_18 = 3828624750U;
int zero = 0;
short var_19 = (short)-9944;
unsigned char var_20 = (unsigned char)183;
int var_21 = 236417714;
int var_22 = -380811827;
signed char arr_0 [23] [23] ;
signed char arr_1 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)6;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (signed char)-120;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
