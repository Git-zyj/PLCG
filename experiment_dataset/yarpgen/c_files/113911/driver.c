#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)25814;
signed char var_3 = (signed char)-116;
long long int var_4 = -417738950456162969LL;
long long int var_6 = -7000464160246451839LL;
unsigned char var_7 = (unsigned char)150;
short var_9 = (short)-22294;
int zero = 0;
long long int var_14 = -4781265150458871396LL;
short var_15 = (short)10606;
short var_16 = (short)15829;
signed char var_17 = (signed char)-80;
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
