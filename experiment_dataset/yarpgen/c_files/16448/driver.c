#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8981512150094933711LL;
short var_8 = (short)-18351;
signed char var_9 = (signed char)-10;
signed char var_10 = (signed char)19;
unsigned short var_11 = (unsigned short)17368;
int zero = 0;
short var_14 = (short)20124;
short var_15 = (short)-26958;
long long int var_16 = -9118345164259646242LL;
unsigned int var_17 = 3720127692U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
