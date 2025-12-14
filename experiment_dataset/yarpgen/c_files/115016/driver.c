#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4171296470U;
_Bool var_6 = (_Bool)1;
unsigned int var_12 = 486311224U;
int zero = 0;
unsigned short var_20 = (unsigned short)51015;
unsigned char var_21 = (unsigned char)23;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
