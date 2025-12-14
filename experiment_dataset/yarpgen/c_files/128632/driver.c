#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)213;
short var_3 = (short)32591;
signed char var_4 = (signed char)-126;
signed char var_8 = (signed char)118;
short var_11 = (short)20558;
short var_15 = (short)-25792;
int zero = 0;
unsigned int var_20 = 1630027342U;
unsigned long long int var_21 = 8281275749387663678ULL;
unsigned int var_22 = 1402171087U;
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
