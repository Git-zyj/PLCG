#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)60653;
signed char var_3 = (signed char)22;
short var_9 = (short)5114;
int zero = 0;
_Bool var_14 = (_Bool)1;
short var_15 = (short)31356;
unsigned char var_16 = (unsigned char)101;
signed char var_17 = (signed char)109;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
