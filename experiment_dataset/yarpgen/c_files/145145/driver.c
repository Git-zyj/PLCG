#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)127;
unsigned char var_1 = (unsigned char)207;
int var_3 = 643858388;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)66;
_Bool var_9 = (_Bool)1;
int zero = 0;
short var_10 = (short)-8494;
int var_11 = 1557776126;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
