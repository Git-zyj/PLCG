#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3895926543U;
short var_3 = (short)5735;
short var_8 = (short)-6235;
_Bool var_9 = (_Bool)1;
int zero = 0;
int var_10 = 505190555;
unsigned short var_11 = (unsigned short)59862;
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
