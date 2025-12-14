#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)26577;
unsigned short var_7 = (unsigned short)52281;
short var_8 = (short)4884;
int var_18 = 2116514838;
int zero = 0;
signed char var_20 = (signed char)-119;
int var_21 = -998571923;
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
