#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2823786156U;
unsigned int var_2 = 1930755039U;
unsigned short var_6 = (unsigned short)12923;
unsigned short var_7 = (unsigned short)2234;
short var_15 = (short)18182;
int zero = 0;
unsigned long long int var_19 = 8750458005807690238ULL;
unsigned long long int var_20 = 4259354339967052454ULL;
int var_21 = -66229484;
unsigned long long int var_22 = 12159955908264228654ULL;
int arr_1 [17] [17] ;
unsigned short arr_4 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = -135432134;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)34251;
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
