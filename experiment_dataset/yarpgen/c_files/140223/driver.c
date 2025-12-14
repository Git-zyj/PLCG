#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7561446201777895269ULL;
signed char var_2 = (signed char)65;
unsigned long long int var_3 = 10660422661137973173ULL;
signed char var_11 = (signed char)-1;
int var_14 = 832027977;
unsigned long long int var_15 = 14918638710963922509ULL;
int zero = 0;
int var_19 = -1603228111;
unsigned short var_20 = (unsigned short)60884;
unsigned long long int var_21 = 9248373226493145959ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
