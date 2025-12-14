#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)33858;
unsigned short var_4 = (unsigned short)47439;
long long int var_5 = -968775634624850671LL;
short var_7 = (short)7066;
unsigned short var_10 = (unsigned short)18913;
int zero = 0;
long long int var_11 = 6676204209769952230LL;
unsigned long long int var_12 = 13289335147904127576ULL;
signed char var_13 = (signed char)-42;
unsigned char var_14 = (unsigned char)166;
int var_15 = -1690460838;
_Bool arr_4 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
