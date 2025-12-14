#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)65;
short var_3 = (short)4098;
unsigned char var_9 = (unsigned char)66;
_Bool var_11 = (_Bool)0;
int zero = 0;
_Bool var_18 = (_Bool)0;
long long int var_19 = -1929212969079084138LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
