#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)177;
unsigned int var_6 = 4115597822U;
unsigned long long int var_8 = 12394657074649286523ULL;
unsigned int var_12 = 754485429U;
unsigned long long int var_14 = 5336993624613509293ULL;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned char var_17 = (unsigned char)203;
unsigned char var_18 = (unsigned char)81;
unsigned char var_19 = (unsigned char)183;
unsigned long long int var_20 = 3171855932330130854ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
