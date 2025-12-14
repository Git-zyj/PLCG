#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)58;
signed char var_2 = (signed char)21;
signed char var_3 = (signed char)19;
unsigned short var_4 = (unsigned short)9711;
unsigned int var_7 = 1451428589U;
unsigned int var_8 = 869281725U;
int zero = 0;
unsigned int var_13 = 3238559271U;
unsigned short var_14 = (unsigned short)10957;
unsigned short var_15 = (unsigned short)61879;
unsigned int var_16 = 4034986515U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
