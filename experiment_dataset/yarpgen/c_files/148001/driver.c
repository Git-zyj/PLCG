#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 345317590U;
unsigned short var_2 = (unsigned short)41932;
unsigned int var_3 = 1203689406U;
short var_5 = (short)11791;
unsigned long long int var_6 = 5627700677804227195ULL;
unsigned short var_7 = (unsigned short)6184;
int var_9 = -1389594473;
short var_11 = (short)31615;
signed char var_12 = (signed char)103;
int zero = 0;
unsigned char var_17 = (unsigned char)54;
unsigned char var_18 = (unsigned char)254;
unsigned char var_19 = (unsigned char)128;
unsigned int var_20 = 1652359886U;
unsigned long long int var_21 = 2999511486153188901ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
