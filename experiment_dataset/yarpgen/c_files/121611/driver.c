#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)105;
short var_10 = (short)3281;
unsigned long long int var_16 = 4934763762852092829ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)169;
unsigned char var_21 = (unsigned char)106;
unsigned short var_22 = (unsigned short)40205;
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
