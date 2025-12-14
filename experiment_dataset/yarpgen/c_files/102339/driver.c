#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 395259155;
unsigned short var_1 = (unsigned short)40885;
long long int var_3 = 7868320527937827744LL;
unsigned long long int var_5 = 1636374481136212544ULL;
unsigned short var_6 = (unsigned short)52935;
short var_7 = (short)-29777;
short var_10 = (short)20571;
int zero = 0;
int var_11 = -683805412;
unsigned int var_12 = 1528297959U;
unsigned long long int var_13 = 887486332465940198ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
