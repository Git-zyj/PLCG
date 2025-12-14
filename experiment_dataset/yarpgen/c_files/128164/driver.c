#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)-21981;
unsigned int var_8 = 1455325251U;
long long int var_13 = -3912972902049568859LL;
unsigned char var_16 = (unsigned char)29;
int zero = 0;
short var_20 = (short)-21381;
unsigned char var_21 = (unsigned char)92;
_Bool var_22 = (_Bool)1;
unsigned int var_23 = 909016994U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
