#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)20918;
unsigned short var_5 = (unsigned short)54232;
unsigned int var_7 = 2165788560U;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)3234;
short var_10 = (short)-271;
unsigned int var_13 = 4142520206U;
int zero = 0;
short var_20 = (short)28500;
_Bool var_21 = (_Bool)1;
unsigned short var_22 = (unsigned short)39818;
void init() {
}

void checksum() {
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
