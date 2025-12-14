#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-110;
unsigned short var_1 = (unsigned short)4159;
unsigned long long int var_7 = 5643803034757842187ULL;
_Bool var_11 = (_Bool)1;
unsigned int var_13 = 908611289U;
int zero = 0;
int var_16 = -378935538;
int var_17 = -21481045;
unsigned long long int var_18 = 7546579099215495775ULL;
unsigned char var_19 = (unsigned char)145;
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
