#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1518718927;
unsigned short var_2 = (unsigned short)6470;
unsigned char var_3 = (unsigned char)51;
unsigned int var_5 = 907474397U;
signed char var_9 = (signed char)90;
int zero = 0;
int var_15 = 1446893852;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)60960;
void init() {
}

void checksum() {
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
