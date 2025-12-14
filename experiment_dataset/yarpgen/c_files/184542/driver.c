#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 3991433490627433927LL;
long long int var_9 = 4215477898242081779LL;
int var_10 = -964574282;
int zero = 0;
unsigned int var_14 = 2729293479U;
unsigned long long int var_15 = 17052617440699847750ULL;
int var_16 = 1721292832;
unsigned long long int var_17 = 6218377745394481158ULL;
unsigned int var_18 = 2631277754U;
unsigned char var_19 = (unsigned char)3;
unsigned char arr_1 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (unsigned char)187;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
