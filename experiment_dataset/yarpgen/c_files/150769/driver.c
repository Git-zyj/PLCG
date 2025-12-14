#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)132;
signed char var_2 = (signed char)48;
int var_4 = -1705659330;
unsigned long long int var_7 = 12630974993442549167ULL;
long long int var_9 = -6771421259990143056LL;
int zero = 0;
short var_12 = (short)38;
unsigned long long int var_13 = 16809581405275553125ULL;
void init() {
}

void checksum() {
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
