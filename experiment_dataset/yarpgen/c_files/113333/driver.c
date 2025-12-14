#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)36;
_Bool var_2 = (_Bool)1;
signed char var_4 = (signed char)116;
signed char var_5 = (signed char)106;
int zero = 0;
unsigned char var_10 = (unsigned char)157;
long long int var_11 = -8222014746454577090LL;
signed char var_12 = (signed char)-6;
long long int var_13 = 7019465616631969965LL;
short var_14 = (short)7832;
unsigned char var_15 = (unsigned char)59;
unsigned char arr_5 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (unsigned char)42;
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
