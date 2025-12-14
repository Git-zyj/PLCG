#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)580;
long long int var_2 = -4151112481385654085LL;
unsigned long long int var_4 = 3275199864670995873ULL;
int zero = 0;
signed char var_10 = (signed char)0;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)29799;
int var_13 = 1454300375;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 5788368773325949480ULL;
unsigned short arr_0 [25] ;
signed char arr_1 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned short)40864;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)7;
}

void checksum() {
    hash(&seed, var_10);
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
