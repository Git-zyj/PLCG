#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = 1211542764;
long long int var_15 = 4068560192416116706LL;
int var_16 = 1920283790;
int zero = 0;
unsigned int var_19 = 3800535515U;
long long int var_20 = -4197393569282709154LL;
signed char var_21 = (signed char)-115;
short var_22 = (short)-22158;
unsigned long long int arr_1 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 18011516104973970247ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
