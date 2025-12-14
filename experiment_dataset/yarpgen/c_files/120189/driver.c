#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)106;
_Bool var_6 = (_Bool)1;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned long long int var_20 = 9391013759122018765ULL;
long long int var_21 = -706136420756804211LL;
signed char var_22 = (signed char)113;
short var_23 = (short)-8772;
long long int var_24 = 6515189064272751663LL;
signed char var_25 = (signed char)81;
_Bool var_26 = (_Bool)1;
unsigned char arr_0 [13] ;
int arr_1 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned char)145;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? 1114603648 : -1529108466;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
