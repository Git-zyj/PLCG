#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)48510;
unsigned short var_5 = (unsigned short)60356;
signed char var_6 = (signed char)-47;
unsigned long long int var_8 = 10886220272614063968ULL;
signed char var_9 = (signed char)95;
int zero = 0;
unsigned char var_11 = (unsigned char)254;
long long int var_12 = 4268910778702668748LL;
unsigned short var_13 = (unsigned short)34452;
short var_14 = (short)-28968;
unsigned long long int arr_2 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 2081583824405021514ULL;
}

void checksum() {
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
