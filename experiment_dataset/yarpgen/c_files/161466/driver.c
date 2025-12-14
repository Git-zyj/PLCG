#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)20047;
unsigned char var_5 = (unsigned char)174;
unsigned char var_9 = (unsigned char)139;
int zero = 0;
_Bool var_10 = (_Bool)1;
short var_11 = (short)-24323;
unsigned int var_12 = 2471796835U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
