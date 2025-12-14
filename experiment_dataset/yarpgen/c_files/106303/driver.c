#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1339881703;
unsigned long long int var_1 = 13204639605233637851ULL;
short var_4 = (short)-11144;
int var_6 = 1521897203;
int var_10 = -1522020192;
int zero = 0;
short var_11 = (short)-21110;
unsigned long long int var_12 = 12372219595468836663ULL;
short var_13 = (short)-13098;
unsigned long long int var_14 = 5884124065174340436ULL;
long long int var_15 = -4129238553776276391LL;
_Bool arr_4 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)0;
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
