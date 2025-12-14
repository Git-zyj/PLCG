#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 7625448269643852281ULL;
unsigned int var_3 = 706682674U;
int var_4 = 1102955950;
short var_5 = (short)3816;
unsigned long long int var_10 = 18078379457704114246ULL;
_Bool var_13 = (_Bool)0;
int zero = 0;
short var_16 = (short)17419;
unsigned short var_17 = (unsigned short)64883;
unsigned long long int var_18 = 4797872639012627133ULL;
signed char arr_0 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (signed char)113;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
