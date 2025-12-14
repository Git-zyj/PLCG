#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-8078;
signed char var_4 = (signed char)-70;
unsigned char var_5 = (unsigned char)105;
_Bool var_6 = (_Bool)1;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)152;
unsigned long long int var_15 = 12068452791727730032ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)84;
unsigned int var_18 = 732987038U;
void init() {
}

void checksum() {
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
