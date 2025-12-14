#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)219;
unsigned long long int var_12 = 10152651319428552583ULL;
short var_16 = (short)-21004;
int zero = 0;
long long int var_18 = -6082372150461497657LL;
unsigned char var_19 = (unsigned char)169;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
