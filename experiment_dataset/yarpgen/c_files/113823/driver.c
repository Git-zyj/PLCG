#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -268360090487701145LL;
signed char var_6 = (signed char)61;
short var_7 = (short)-3972;
unsigned short var_10 = (unsigned short)36990;
int zero = 0;
unsigned char var_13 = (unsigned char)194;
unsigned char var_14 = (unsigned char)56;
short var_15 = (short)3958;
_Bool var_16 = (_Bool)1;
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
