#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -528979712;
_Bool var_9 = (_Bool)1;
int var_11 = 1867885743;
unsigned char var_12 = (unsigned char)106;
int zero = 0;
unsigned short var_14 = (unsigned short)31057;
short var_15 = (short)-30220;
short var_16 = (short)-12218;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
