#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)39;
unsigned char var_4 = (unsigned char)77;
unsigned long long int var_5 = 15669646891784190728ULL;
unsigned int var_12 = 3405505450U;
unsigned char var_13 = (unsigned char)177;
int var_14 = 1666283982;
short var_17 = (short)24430;
int zero = 0;
unsigned short var_20 = (unsigned short)51781;
short var_21 = (short)-18388;
unsigned short var_22 = (unsigned short)43181;
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
