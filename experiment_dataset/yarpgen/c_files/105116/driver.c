#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)79;
short var_2 = (short)-25333;
unsigned int var_5 = 251589454U;
unsigned short var_8 = (unsigned short)25959;
long long int var_12 = 993048198779214547LL;
unsigned int var_13 = 2188284676U;
signed char var_15 = (signed char)100;
int zero = 0;
unsigned long long int var_17 = 10076396601557025727ULL;
unsigned long long int var_18 = 2953370163912088867ULL;
long long int var_19 = -2258589290314540530LL;
void init() {
}

void checksum() {
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
