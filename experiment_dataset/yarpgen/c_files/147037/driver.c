#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)16714;
int var_3 = 1600354765;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 2065529964169762030ULL;
unsigned int var_8 = 1774167502U;
_Bool var_9 = (_Bool)0;
unsigned char var_10 = (unsigned char)125;
unsigned int var_12 = 263027695U;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)194;
int zero = 0;
unsigned int var_15 = 921274868U;
signed char var_16 = (signed char)102;
int var_17 = -1637036322;
unsigned long long int var_18 = 4736375726159733168ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
