#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_3 = 2982164884U;
unsigned int var_9 = 2142972893U;
unsigned char var_16 = (unsigned char)194;
unsigned short var_18 = (unsigned short)21078;
int zero = 0;
unsigned long long int var_19 = 4322517135712684064ULL;
unsigned int var_20 = 568340986U;
signed char var_21 = (signed char)-58;
unsigned short var_22 = (unsigned short)27947;
int var_23 = 1121049174;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
