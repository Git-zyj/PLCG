#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 910608546U;
_Bool var_1 = (_Bool)0;
unsigned char var_6 = (unsigned char)150;
unsigned short var_7 = (unsigned short)41403;
unsigned int var_12 = 1880157561U;
unsigned int var_13 = 2350372315U;
signed char var_15 = (signed char)105;
int zero = 0;
signed char var_20 = (signed char)-39;
unsigned short var_21 = (unsigned short)30078;
void init() {
}

void checksum() {
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
