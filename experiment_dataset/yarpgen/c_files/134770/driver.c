#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -625488539;
int var_1 = -1985641592;
unsigned long long int var_2 = 10345738604675639380ULL;
unsigned char var_3 = (unsigned char)193;
signed char var_4 = (signed char)-57;
int var_8 = -1999720393;
unsigned long long int var_9 = 4403793562042715459ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)96;
unsigned char var_11 = (unsigned char)169;
unsigned char var_12 = (unsigned char)241;
unsigned char var_13 = (unsigned char)238;
int var_14 = -978836475;
int var_15 = 10818825;
unsigned char var_16 = (unsigned char)161;
int arr_0 [13] [13] ;
unsigned char arr_1 [13] ;
int arr_2 [13] [13] [13] ;
unsigned char arr_3 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = 1035284605;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned char)101;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = -1673336343;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)230;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
