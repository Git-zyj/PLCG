#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2316475808U;
short var_6 = (short)-15017;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)214;
int zero = 0;
unsigned char var_11 = (unsigned char)25;
short var_12 = (short)16780;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
