#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)24;
unsigned int var_1 = 674725148U;
unsigned long long int var_2 = 16868028251726982149ULL;
unsigned char var_4 = (unsigned char)118;
unsigned char var_5 = (unsigned char)62;
unsigned char var_6 = (unsigned char)204;
short var_7 = (short)24518;
short var_8 = (short)2383;
int zero = 0;
unsigned char var_10 = (unsigned char)233;
short var_11 = (short)-27445;
signed char var_12 = (signed char)-55;
short var_13 = (short)-9517;
unsigned char var_14 = (unsigned char)172;
unsigned char arr_3 [13] [13] ;
long long int arr_4 [13] ;
long long int arr_9 [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)164;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = 5253006939861811301LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 1743137140520081736LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
