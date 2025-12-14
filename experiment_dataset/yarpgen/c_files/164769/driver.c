#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1953001643;
long long int var_2 = 208135434172181768LL;
short var_3 = (short)-8737;
short var_6 = (short)11493;
signed char var_7 = (signed char)10;
int zero = 0;
signed char var_13 = (signed char)-109;
short var_14 = (short)-29096;
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
