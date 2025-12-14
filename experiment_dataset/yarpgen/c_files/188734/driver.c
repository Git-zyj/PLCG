#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)103;
int var_2 = -1761150795;
short var_3 = (short)11823;
unsigned short var_4 = (unsigned short)58723;
unsigned char var_6 = (unsigned char)235;
unsigned char var_7 = (unsigned char)74;
int zero = 0;
unsigned int var_11 = 4018138851U;
int var_12 = 997414974;
void init() {
}

void checksum() {
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
