#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-3699;
signed char var_4 = (signed char)-113;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)-51;
long long int var_12 = 8610419254377225259LL;
unsigned char var_13 = (unsigned char)34;
unsigned long long int var_14 = 16406247909020313306ULL;
int zero = 0;
long long int var_17 = -5875156908454343361LL;
int var_18 = -1464351973;
unsigned char var_19 = (unsigned char)6;
_Bool arr_0 [25] ;
short arr_1 [25] [25] ;
long long int arr_2 [25] [25] ;
signed char arr_3 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-25633;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = -343304364911504601LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (signed char)57;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
