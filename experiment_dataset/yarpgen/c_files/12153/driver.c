#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-30066;
unsigned char var_1 = (unsigned char)238;
int var_3 = 358784796;
short var_6 = (short)-31279;
short var_9 = (short)5255;
int var_11 = 95011532;
int zero = 0;
unsigned char var_13 = (unsigned char)219;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
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
