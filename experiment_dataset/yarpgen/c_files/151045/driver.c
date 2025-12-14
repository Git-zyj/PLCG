#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3226922961U;
short var_7 = (short)3435;
unsigned short var_9 = (unsigned short)33812;
_Bool var_10 = (_Bool)0;
int zero = 0;
short var_12 = (short)1094;
unsigned short var_13 = (unsigned short)22131;
signed char var_14 = (signed char)40;
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
