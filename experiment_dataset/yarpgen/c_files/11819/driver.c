#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)7;
int var_1 = 385750948;
short var_2 = (short)-15543;
unsigned char var_8 = (unsigned char)50;
int var_9 = -1712558744;
unsigned short var_11 = (unsigned short)31232;
short var_13 = (short)-26246;
signed char var_15 = (signed char)-100;
int zero = 0;
unsigned long long int var_17 = 7486438140835890074ULL;
unsigned long long int var_18 = 9132254334799988108ULL;
unsigned char var_19 = (unsigned char)189;
int var_20 = 1191819767;
unsigned short arr_0 [10] ;
unsigned int arr_1 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (unsigned short)12437;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = 3729108559U;
}

void checksum() {
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
