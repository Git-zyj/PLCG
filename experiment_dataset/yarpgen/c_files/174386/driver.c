#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-14521;
unsigned long long int var_10 = 15203841336211685682ULL;
unsigned int var_15 = 2360133627U;
int zero = 0;
short var_20 = (short)-21387;
unsigned char var_21 = (unsigned char)170;
signed char var_22 = (signed char)20;
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
