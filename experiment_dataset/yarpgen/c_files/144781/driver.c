#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)127;
short var_5 = (short)-11169;
int var_8 = -407763952;
unsigned char var_9 = (unsigned char)254;
int var_10 = 1381721482;
long long int var_14 = -1243284472425462770LL;
int zero = 0;
signed char var_20 = (signed char)96;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 1765237455U;
long long int var_23 = 7164763803460205145LL;
int var_24 = 1200644706;
int arr_1 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = -815781751;
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
