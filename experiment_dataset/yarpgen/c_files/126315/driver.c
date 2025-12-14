#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1999989773;
signed char var_5 = (signed char)126;
unsigned int var_6 = 2505262407U;
int var_7 = 637162559;
short var_8 = (short)-2310;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 3802645322U;
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
