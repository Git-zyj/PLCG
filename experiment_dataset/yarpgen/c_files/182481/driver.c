#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-127;
unsigned long long int var_3 = 16981062046710642906ULL;
int var_5 = 1409772705;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 386017289U;
unsigned long long int var_10 = 7193891350361148413ULL;
int var_11 = -618039020;
int zero = 0;
unsigned int var_13 = 1528481682U;
unsigned long long int var_14 = 15378590329356134051ULL;
unsigned int var_15 = 405461435U;
unsigned int var_16 = 3012483613U;
unsigned int arr_4 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = 4092302557U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
