#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-8955;
unsigned int var_6 = 1423103611U;
int zero = 0;
long long int var_10 = -3086222742195348412LL;
int var_11 = 661589457;
signed char var_12 = (signed char)11;
unsigned char var_13 = (unsigned char)58;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
