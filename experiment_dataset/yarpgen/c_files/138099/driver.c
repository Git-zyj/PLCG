#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)439;
unsigned short var_5 = (unsigned short)24337;
signed char var_6 = (signed char)46;
unsigned short var_7 = (unsigned short)4621;
unsigned long long int var_8 = 17276329486729153967ULL;
int zero = 0;
int var_10 = 945251997;
unsigned long long int var_11 = 6856306466819290917ULL;
short var_12 = (short)-19454;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
