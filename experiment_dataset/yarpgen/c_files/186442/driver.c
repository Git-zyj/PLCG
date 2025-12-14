#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2957977554547055480ULL;
int var_5 = 583104446;
unsigned char var_13 = (unsigned char)193;
unsigned long long int var_14 = 13437097071783851571ULL;
int zero = 0;
short var_18 = (short)12465;
unsigned long long int var_19 = 15093592860895553777ULL;
unsigned long long int var_20 = 13247651518648824607ULL;
unsigned short var_21 = (unsigned short)13189;
unsigned int var_22 = 3989960869U;
unsigned long long int arr_6 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = 15687220948969393380ULL;
}

void checksum() {
    hash(&seed, var_18);
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
