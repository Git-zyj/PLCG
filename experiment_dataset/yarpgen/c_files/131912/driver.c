#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)116;
short var_5 = (short)-16326;
unsigned char var_6 = (unsigned char)74;
unsigned int var_9 = 1146899165U;
long long int var_15 = 4322536287342367253LL;
int zero = 0;
int var_18 = 351291418;
int var_19 = 1635948135;
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
