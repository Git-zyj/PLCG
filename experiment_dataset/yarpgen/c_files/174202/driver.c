#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4166427239971814321ULL;
short var_1 = (short)-24351;
short var_4 = (short)-1254;
unsigned long long int var_8 = 6683227727063174909ULL;
short var_12 = (short)5941;
int zero = 0;
unsigned long long int var_13 = 6486972984983812125ULL;
unsigned char var_14 = (unsigned char)63;
short var_15 = (short)5247;
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
