#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)41;
short var_8 = (short)-6966;
unsigned char var_9 = (unsigned char)241;
int var_10 = -297581038;
_Bool var_12 = (_Bool)1;
int zero = 0;
short var_14 = (short)-20344;
int var_15 = -761052932;
unsigned char var_16 = (unsigned char)49;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
