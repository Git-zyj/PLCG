#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)38555;
signed char var_1 = (signed char)-2;
_Bool var_2 = (_Bool)0;
unsigned long long int var_4 = 15080585148924206437ULL;
unsigned int var_7 = 2806122594U;
unsigned long long int var_8 = 8044768436198067571ULL;
long long int var_12 = -7243343397594832541LL;
signed char var_13 = (signed char)78;
int zero = 0;
unsigned char var_15 = (unsigned char)15;
unsigned char var_16 = (unsigned char)9;
unsigned char var_17 = (unsigned char)117;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
