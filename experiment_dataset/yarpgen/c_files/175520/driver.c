#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_9 = (_Bool)0;
signed char var_10 = (signed char)-107;
unsigned short var_11 = (unsigned short)4981;
unsigned short var_12 = (unsigned short)4526;
int zero = 0;
unsigned char var_13 = (unsigned char)162;
signed char var_14 = (signed char)30;
short var_15 = (short)21049;
long long int var_16 = -8104517122098050772LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
