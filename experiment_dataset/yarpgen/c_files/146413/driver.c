#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)21539;
unsigned long long int var_3 = 13783797931880954958ULL;
_Bool var_7 = (_Bool)1;
unsigned char var_13 = (unsigned char)85;
_Bool var_14 = (_Bool)1;
int var_15 = 750899641;
unsigned long long int var_16 = 9159296753503999448ULL;
int var_18 = 172611036;
int zero = 0;
unsigned char var_19 = (unsigned char)98;
unsigned int var_20 = 828230723U;
_Bool var_21 = (_Bool)1;
void init() {
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
