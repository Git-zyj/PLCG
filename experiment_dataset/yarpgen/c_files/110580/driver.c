#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)108;
signed char var_4 = (signed char)-35;
unsigned char var_5 = (unsigned char)214;
int var_6 = 1992929751;
unsigned char var_9 = (unsigned char)214;
long long int var_10 = -7914113863955253713LL;
int zero = 0;
short var_11 = (short)-27129;
unsigned char var_12 = (unsigned char)116;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)78;
long long int var_15 = 8540887689510026759LL;
unsigned int var_16 = 3196877985U;
unsigned short arr_3 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)22700;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
