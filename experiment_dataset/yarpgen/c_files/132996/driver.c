#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)56;
short var_1 = (short)-25814;
unsigned char var_2 = (unsigned char)183;
unsigned long long int var_3 = 6888040414395879201ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)179;
unsigned int var_11 = 913534393U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
