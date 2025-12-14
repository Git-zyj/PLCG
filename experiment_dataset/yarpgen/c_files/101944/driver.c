#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)56328;
unsigned char var_2 = (unsigned char)11;
_Bool var_3 = (_Bool)0;
unsigned char var_5 = (unsigned char)20;
short var_9 = (short)32665;
short var_15 = (short)23187;
int zero = 0;
unsigned long long int var_19 = 11552399873723359694ULL;
short var_20 = (short)29239;
signed char var_21 = (signed char)73;
int var_22 = 927550026;
void init() {
}

void checksum() {
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
