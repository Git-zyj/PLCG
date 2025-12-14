#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-22507;
signed char var_4 = (signed char)93;
unsigned int var_6 = 2317483049U;
unsigned short var_12 = (unsigned short)21336;
int zero = 0;
unsigned int var_20 = 431092956U;
long long int var_21 = -6460861388580853712LL;
_Bool var_22 = (_Bool)1;
unsigned char var_23 = (unsigned char)25;
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
