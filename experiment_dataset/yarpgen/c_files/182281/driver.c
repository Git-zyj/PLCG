#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)18;
int var_2 = -2122981717;
unsigned int var_3 = 328512984U;
short var_5 = (short)2968;
_Bool var_7 = (_Bool)0;
int zero = 0;
int var_10 = -310602383;
short var_11 = (short)20800;
unsigned short var_12 = (unsigned short)57834;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
