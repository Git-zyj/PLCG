#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1273735305U;
_Bool var_2 = (_Bool)1;
signed char var_4 = (signed char)113;
unsigned short var_7 = (unsigned short)25358;
short var_9 = (short)-20851;
int zero = 0;
unsigned int var_10 = 3737589348U;
unsigned char var_11 = (unsigned char)165;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
