#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)46026;
unsigned int var_6 = 2663773485U;
signed char var_7 = (signed char)-87;
int var_9 = -1517997742;
int zero = 0;
unsigned short var_11 = (unsigned short)54068;
unsigned short var_12 = (unsigned short)34315;
unsigned short var_13 = (unsigned short)16138;
unsigned long long int var_14 = 14777203673925945131ULL;
unsigned char var_15 = (unsigned char)26;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
