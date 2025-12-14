#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)58814;
unsigned long long int var_5 = 9421823021184112785ULL;
short var_9 = (short)-10282;
int zero = 0;
signed char var_11 = (signed char)87;
unsigned char var_12 = (unsigned char)177;
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
