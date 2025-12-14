#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)1492;
unsigned char var_9 = (unsigned char)121;
short var_13 = (short)25786;
short var_15 = (short)-24389;
int zero = 0;
_Bool var_16 = (_Bool)0;
short var_17 = (short)18842;
void init() {
}

void checksum() {
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
