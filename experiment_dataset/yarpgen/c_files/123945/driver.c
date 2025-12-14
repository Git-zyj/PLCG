#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)(-127 - 1);
signed char var_1 = (signed char)-16;
unsigned long long int var_3 = 11717485747130576372ULL;
short var_4 = (short)17623;
long long int var_6 = 9069034648156622484LL;
long long int var_8 = -1437597784522287536LL;
short var_9 = (short)-10053;
int zero = 0;
unsigned short var_14 = (unsigned short)35917;
signed char var_15 = (signed char)78;
signed char var_16 = (signed char)76;
long long int var_17 = 2676973449470359550LL;
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
