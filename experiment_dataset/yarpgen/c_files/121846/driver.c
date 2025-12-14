#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)32;
unsigned char var_6 = (unsigned char)66;
unsigned char var_8 = (unsigned char)42;
unsigned int var_11 = 1968871458U;
short var_12 = (short)-5845;
int zero = 0;
signed char var_13 = (signed char)13;
_Bool var_14 = (_Bool)0;
long long int var_15 = -7256197092014493611LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
