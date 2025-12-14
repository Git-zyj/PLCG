#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)27465;
_Bool var_3 = (_Bool)1;
int var_5 = -608909984;
int var_8 = -631472174;
short var_10 = (short)-2767;
short var_11 = (short)11758;
int zero = 0;
unsigned short var_13 = (unsigned short)24112;
unsigned long long int var_14 = 12174990355374494990ULL;
signed char var_15 = (signed char)56;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
