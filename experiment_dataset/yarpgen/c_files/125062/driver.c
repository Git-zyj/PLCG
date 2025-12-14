#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)163;
long long int var_7 = 1693878251927082081LL;
int var_8 = -848748011;
int zero = 0;
short var_19 = (short)-19198;
unsigned char var_20 = (unsigned char)179;
short var_21 = (short)-13405;
signed char var_22 = (signed char)-92;
unsigned char var_23 = (unsigned char)162;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
