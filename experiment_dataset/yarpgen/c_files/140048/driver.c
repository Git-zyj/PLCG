#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-53;
signed char var_5 = (signed char)28;
signed char var_9 = (signed char)-54;
short var_10 = (short)-15365;
unsigned short var_11 = (unsigned short)34117;
int zero = 0;
signed char var_13 = (signed char)-8;
unsigned short var_14 = (unsigned short)36245;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
