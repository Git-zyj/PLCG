#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)19;
_Bool var_8 = (_Bool)0;
unsigned long long int var_10 = 16787549090593800795ULL;
unsigned char var_13 = (unsigned char)225;
_Bool var_15 = (_Bool)0;
signed char var_17 = (signed char)-56;
int zero = 0;
unsigned char var_19 = (unsigned char)187;
unsigned long long int var_20 = 10239676619978786955ULL;
unsigned char var_21 = (unsigned char)237;
short var_22 = (short)-32585;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
