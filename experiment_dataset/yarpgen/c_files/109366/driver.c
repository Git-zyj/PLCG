#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1717301649;
signed char var_2 = (signed char)-10;
unsigned long long int var_3 = 10945561490464695779ULL;
unsigned short var_5 = (unsigned short)55991;
short var_6 = (short)-28364;
int zero = 0;
signed char var_11 = (signed char)-13;
unsigned char var_12 = (unsigned char)103;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
