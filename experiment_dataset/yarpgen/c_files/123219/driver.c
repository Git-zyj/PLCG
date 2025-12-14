#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)7465;
signed char var_2 = (signed char)-110;
unsigned char var_3 = (unsigned char)209;
signed char var_4 = (signed char)-92;
short var_5 = (short)25898;
_Bool var_6 = (_Bool)0;
int zero = 0;
short var_11 = (short)20518;
short var_12 = (short)-32183;
signed char var_13 = (signed char)-50;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
