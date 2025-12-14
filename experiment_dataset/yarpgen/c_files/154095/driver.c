#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)21758;
unsigned char var_7 = (unsigned char)49;
unsigned char var_12 = (unsigned char)223;
long long int var_19 = 3897068608557543961LL;
int zero = 0;
int var_20 = 605088069;
unsigned int var_21 = 3097283820U;
_Bool var_22 = (_Bool)1;
unsigned char var_23 = (unsigned char)134;
void init() {
}

void checksum() {
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
