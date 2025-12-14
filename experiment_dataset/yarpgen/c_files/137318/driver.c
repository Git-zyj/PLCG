#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8226167803556269736ULL;
unsigned long long int var_8 = 6875624500089787423ULL;
unsigned int var_10 = 2795319141U;
int zero = 0;
long long int var_19 = 1166814947569215559LL;
signed char var_20 = (signed char)-86;
int var_21 = 860707699;
unsigned char var_22 = (unsigned char)253;
unsigned char var_23 = (unsigned char)124;
int arr_1 [22] [22] ;
signed char arr_2 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = 1407611232;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (signed char)-85;
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
