#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1194010770;
short var_3 = (short)-257;
unsigned long long int var_4 = 9986469421279223536ULL;
unsigned short var_5 = (unsigned short)44860;
int var_6 = -725190139;
int zero = 0;
unsigned long long int var_12 = 7542941906308078294ULL;
int var_13 = 350450919;
int var_14 = 11839342;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
