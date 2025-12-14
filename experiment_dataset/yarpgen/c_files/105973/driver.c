#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12405416640718555986ULL;
unsigned long long int var_1 = 2602879735295520710ULL;
unsigned char var_3 = (unsigned char)34;
signed char var_5 = (signed char)-46;
long long int var_7 = -3537979088992432171LL;
long long int var_9 = 3573912112035710047LL;
unsigned int var_10 = 2223706390U;
unsigned char var_14 = (unsigned char)61;
int zero = 0;
long long int var_15 = 4268643559908358321LL;
unsigned long long int var_16 = 4929296009676257997ULL;
unsigned long long int var_17 = 11894009230461296869ULL;
long long int var_18 = -6744362246144552770LL;
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
