#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1699153987;
short var_3 = (short)17490;
short var_7 = (short)-13709;
unsigned char var_11 = (unsigned char)35;
int zero = 0;
int var_15 = 857384496;
long long int var_16 = 7167249568943051051LL;
void init() {
}

void checksum() {
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
