#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -257651638;
int var_3 = 865173344;
int var_13 = 22661502;
unsigned long long int var_14 = 10977194840087167369ULL;
unsigned long long int var_16 = 13622548831505595243ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)27594;
long long int var_20 = -8530591595544162360LL;
unsigned char var_21 = (unsigned char)235;
unsigned int arr_1 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 1111649981U : 3664771457U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
