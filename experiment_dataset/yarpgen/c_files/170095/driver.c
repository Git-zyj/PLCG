#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)25;
short var_2 = (short)-18135;
short var_7 = (short)-8395;
signed char var_8 = (signed char)-77;
unsigned char var_11 = (unsigned char)204;
unsigned int var_15 = 3872117973U;
int zero = 0;
unsigned long long int var_16 = 3553556548673177099ULL;
short var_17 = (short)-26014;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
