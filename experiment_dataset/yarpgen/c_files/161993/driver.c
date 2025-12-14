#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)27568;
unsigned int var_2 = 4132832019U;
unsigned int var_4 = 4085372093U;
unsigned char var_8 = (unsigned char)44;
int var_10 = 809712021;
signed char var_11 = (signed char)-97;
unsigned long long int var_12 = 9875548721355310468ULL;
unsigned char var_13 = (unsigned char)20;
unsigned char var_17 = (unsigned char)221;
_Bool var_19 = (_Bool)1;
int zero = 0;
unsigned int var_20 = 2857428856U;
unsigned int var_21 = 649095666U;
unsigned long long int var_22 = 13065438027530723960ULL;
void init() {
}

void checksum() {
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
