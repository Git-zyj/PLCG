#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2821243199068057558ULL;
unsigned char var_1 = (unsigned char)168;
_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)128;
_Bool var_8 = (_Bool)1;
int zero = 0;
long long int var_10 = -513627536641366289LL;
unsigned short var_11 = (unsigned short)16507;
unsigned char var_12 = (unsigned char)41;
int var_13 = -493025597;
signed char var_14 = (signed char)-72;
unsigned long long int var_15 = 4118766477139739430ULL;
int arr_0 [22] [22] ;
unsigned long long int arr_2 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = 1012312615;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 8344767982848667149ULL : 10547066087339414858ULL;
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
