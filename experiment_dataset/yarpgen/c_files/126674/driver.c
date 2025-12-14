#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-77;
int var_6 = -769710252;
unsigned char var_9 = (unsigned char)70;
short var_10 = (short)5470;
signed char var_11 = (signed char)113;
unsigned char var_13 = (unsigned char)11;
int var_15 = 1790886281;
int zero = 0;
signed char var_16 = (signed char)98;
unsigned int var_17 = 4253227403U;
short var_18 = (short)2027;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
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
