#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)4337;
signed char var_6 = (signed char)-110;
unsigned char var_7 = (unsigned char)171;
unsigned int var_9 = 2550026358U;
_Bool var_12 = (_Bool)1;
int zero = 0;
long long int var_15 = -6934323712433929180LL;
signed char var_16 = (signed char)-127;
void init() {
}

void checksum() {
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
