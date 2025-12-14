#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2172341618U;
short var_5 = (short)-15490;
long long int var_14 = -7709138883131140537LL;
int zero = 0;
unsigned char var_16 = (unsigned char)68;
unsigned char var_17 = (unsigned char)157;
unsigned int var_18 = 506352728U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
