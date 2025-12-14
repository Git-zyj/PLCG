#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)3077;
long long int var_6 = 8475480242654906267LL;
int var_8 = 397357739;
_Bool var_9 = (_Bool)1;
unsigned char var_11 = (unsigned char)192;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 687940147U;
short var_14 = (short)-12529;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
