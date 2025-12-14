#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-2122;
long long int var_1 = -8895126226324213105LL;
unsigned int var_2 = 2333998107U;
_Bool var_3 = (_Bool)0;
long long int var_4 = 2124032818021989884LL;
long long int var_5 = -7686085382280617907LL;
_Bool var_8 = (_Bool)1;
long long int var_9 = -8798522307279208037LL;
unsigned char var_13 = (unsigned char)190;
int var_14 = -1508048951;
unsigned char var_16 = (unsigned char)197;
int zero = 0;
unsigned int var_18 = 3927726375U;
long long int var_19 = 1190639080274669895LL;
_Bool var_20 = (_Bool)0;
int var_21 = 1019919104;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
