#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5642876554524371998LL;
unsigned short var_7 = (unsigned short)16940;
signed char var_13 = (signed char)-60;
int var_17 = 1678707724;
unsigned short var_18 = (unsigned short)55852;
int zero = 0;
unsigned int var_20 = 2159970579U;
short var_21 = (short)-6116;
short var_22 = (short)-2415;
unsigned short var_23 = (unsigned short)22648;
int var_24 = -742277560;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
