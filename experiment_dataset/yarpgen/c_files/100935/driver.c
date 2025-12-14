#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)8832;
unsigned int var_12 = 4043917194U;
_Bool var_13 = (_Bool)1;
int var_14 = 435679208;
unsigned char var_16 = (unsigned char)199;
int zero = 0;
long long int var_17 = -6642809423956041410LL;
int var_18 = -108860125;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
