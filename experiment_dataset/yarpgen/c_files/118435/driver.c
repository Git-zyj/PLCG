#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)15684;
long long int var_8 = 2068058210369735306LL;
signed char var_13 = (signed char)-89;
short var_14 = (short)3444;
int zero = 0;
unsigned short var_15 = (unsigned short)41205;
long long int var_16 = 8896692186226170872LL;
unsigned char var_17 = (unsigned char)12;
unsigned char var_18 = (unsigned char)4;
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
