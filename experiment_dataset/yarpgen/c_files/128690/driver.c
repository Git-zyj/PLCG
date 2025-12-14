#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)152;
signed char var_2 = (signed char)88;
short var_12 = (short)18006;
unsigned long long int var_14 = 14090235246725823242ULL;
unsigned long long int var_18 = 17021456250780485937ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)206;
unsigned long long int var_20 = 6259252248169438154ULL;
unsigned char var_21 = (unsigned char)54;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
