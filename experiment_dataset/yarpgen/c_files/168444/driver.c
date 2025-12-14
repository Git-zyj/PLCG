#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3395822481178840434LL;
signed char var_1 = (signed char)103;
unsigned char var_2 = (unsigned char)254;
signed char var_4 = (signed char)76;
unsigned short var_5 = (unsigned short)41646;
unsigned int var_6 = 1240916174U;
unsigned short var_8 = (unsigned short)51090;
unsigned long long int var_10 = 9170898013219665276ULL;
signed char var_11 = (signed char)-54;
int zero = 0;
unsigned int var_12 = 3658641260U;
signed char var_13 = (signed char)48;
unsigned int var_14 = 2125072290U;
long long int var_15 = -2962289798461393519LL;
unsigned short var_16 = (unsigned short)5107;
signed char var_17 = (signed char)-17;
short arr_0 [16] ;
int arr_2 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (short)-8863;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 522116808;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
