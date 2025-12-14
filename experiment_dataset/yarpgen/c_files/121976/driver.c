#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1682190508;
_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)63;
unsigned char var_7 = (unsigned char)102;
int zero = 0;
unsigned short var_12 = (unsigned short)59167;
unsigned int var_13 = 1936472933U;
int var_14 = 1255361722;
signed char var_15 = (signed char)33;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
