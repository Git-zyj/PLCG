#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2772932603U;
unsigned int var_3 = 1558580168U;
unsigned short var_6 = (unsigned short)31778;
signed char var_7 = (signed char)21;
unsigned long long int var_8 = 8272111238885808862ULL;
short var_11 = (short)26885;
unsigned long long int var_13 = 5189596657095105283ULL;
long long int var_15 = -100756610831363024LL;
unsigned char var_16 = (unsigned char)150;
unsigned short var_17 = (unsigned short)34460;
int zero = 0;
unsigned int var_19 = 2294156322U;
unsigned short var_20 = (unsigned short)16467;
unsigned int var_21 = 2446748869U;
long long int var_22 = -8320124332980625893LL;
signed char var_23 = (signed char)57;
int arr_0 [22] [22] ;
unsigned int arr_1 [22] [22] ;
short arr_3 [22] ;
signed char arr_5 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = 143450879;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = 1153636971U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (short)2636;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (signed char)-26;
}

void checksum() {
    hash(&seed, var_19);
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
