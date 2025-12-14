#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-1006;
unsigned char var_5 = (unsigned char)123;
unsigned char var_6 = (unsigned char)158;
int var_10 = -1252153754;
signed char var_11 = (signed char)-56;
signed char var_12 = (signed char)-35;
unsigned int var_14 = 4015351814U;
int zero = 0;
unsigned long long int var_20 = 3319223605257749815ULL;
signed char var_21 = (signed char)93;
int var_22 = 2094210133;
signed char var_23 = (signed char)50;
long long int var_24 = 6080931435733640573LL;
_Bool arr_0 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
