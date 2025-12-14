#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)14618;
unsigned char var_3 = (unsigned char)91;
signed char var_5 = (signed char)39;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)-96;
short var_17 = (short)32119;
int zero = 0;
int var_18 = -1251101714;
short var_19 = (short)-15450;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
