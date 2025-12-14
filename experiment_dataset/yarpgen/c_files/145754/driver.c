#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 8649553954371867880ULL;
_Bool var_12 = (_Bool)0;
unsigned long long int var_14 = 9565579655523957725ULL;
unsigned char var_16 = (unsigned char)91;
int zero = 0;
unsigned short var_18 = (unsigned short)12460;
unsigned long long int var_19 = 5686865124083965506ULL;
void init() {
}

void checksum() {
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
