#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)32392;
int var_8 = -1660299315;
signed char var_18 = (signed char)-94;
unsigned int var_19 = 1354335900U;
int zero = 0;
unsigned int var_20 = 2526485160U;
signed char var_21 = (signed char)-28;
unsigned short var_22 = (unsigned short)37985;
long long int var_23 = 8438807338896693815LL;
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
