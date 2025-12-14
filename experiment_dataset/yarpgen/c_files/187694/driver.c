#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 1123259675709904895LL;
unsigned int var_3 = 692330723U;
unsigned short var_4 = (unsigned short)36669;
signed char var_6 = (signed char)123;
unsigned char var_7 = (unsigned char)50;
unsigned int var_9 = 671223977U;
long long int var_11 = -6780393759205845601LL;
int var_12 = -1548961861;
int zero = 0;
signed char var_13 = (signed char)-45;
unsigned short var_14 = (unsigned short)9428;
short var_15 = (short)-27220;
long long int var_16 = 2299144761143466797LL;
unsigned int var_17 = 854275198U;
short var_18 = (short)32585;
long long int var_19 = 7308947093415228755LL;
signed char var_20 = (signed char)12;
signed char arr_0 [21] [21] ;
unsigned short arr_1 [21] ;
signed char arr_5 [21] [21] [21] ;
signed char arr_7 [21] [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-96;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned short)7840;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)-36 : (signed char)63;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (signed char)-117 : (signed char)125;
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
