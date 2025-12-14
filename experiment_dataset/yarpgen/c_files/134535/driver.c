#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)217;
signed char var_2 = (signed char)(-127 - 1);
unsigned char var_3 = (unsigned char)139;
short var_8 = (short)-17174;
int zero = 0;
short var_10 = (short)-8558;
signed char var_11 = (signed char)-85;
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
