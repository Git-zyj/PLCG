#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)15051;
unsigned short var_2 = (unsigned short)13108;
unsigned short var_8 = (unsigned short)12911;
short var_9 = (short)-24201;
unsigned short var_10 = (unsigned short)24529;
unsigned short var_11 = (unsigned short)44287;
int zero = 0;
unsigned short var_12 = (unsigned short)48514;
int var_13 = 1771769166;
short var_14 = (short)11829;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
