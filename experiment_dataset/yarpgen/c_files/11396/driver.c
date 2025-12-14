#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4899802127420019491ULL;
unsigned short var_1 = (unsigned short)2615;
signed char var_2 = (signed char)110;
unsigned short var_3 = (unsigned short)23023;
int zero = 0;
unsigned long long int var_12 = 1669206012700168574ULL;
unsigned char var_13 = (unsigned char)84;
unsigned char var_14 = (unsigned char)156;
unsigned short arr_0 [12] ;
signed char arr_2 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (unsigned short)52855;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (signed char)122;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
