#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)194;
_Bool var_3 = (_Bool)0;
unsigned long long int var_5 = 880055421420947198ULL;
int var_7 = 809304030;
int var_8 = -694766466;
unsigned char var_10 = (unsigned char)244;
signed char var_11 = (signed char)-98;
int var_14 = -1830388577;
signed char var_15 = (signed char)20;
int zero = 0;
unsigned int var_17 = 2485242043U;
unsigned long long int var_18 = 3849938967288420619ULL;
int var_19 = 927975801;
int var_20 = -1264887580;
unsigned int var_21 = 1250251881U;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
