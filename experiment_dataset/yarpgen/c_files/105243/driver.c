#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_9 = (signed char)-9;
unsigned short var_10 = (unsigned short)29883;
unsigned char var_11 = (unsigned char)47;
_Bool var_12 = (_Bool)0;
int zero = 0;
signed char var_15 = (signed char)90;
unsigned short var_16 = (unsigned short)6004;
unsigned int var_17 = 194475903U;
int var_18 = -975284480;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
