#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)138;
short var_11 = (short)-27178;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 4011955339U;
long long int var_14 = 1944500043062617502LL;
int zero = 0;
signed char var_20 = (signed char)-80;
unsigned int var_21 = 3989933175U;
int var_22 = -1893411433;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
