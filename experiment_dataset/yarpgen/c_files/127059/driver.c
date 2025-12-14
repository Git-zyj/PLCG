#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)20294;
signed char var_6 = (signed char)15;
unsigned int var_8 = 2905987165U;
unsigned int var_13 = 3295471207U;
signed char var_15 = (signed char)-61;
int var_19 = -154134845;
int zero = 0;
short var_20 = (short)-24129;
unsigned int var_21 = 4221462222U;
void init() {
}

void checksum() {
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
