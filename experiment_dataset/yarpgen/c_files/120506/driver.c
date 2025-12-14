#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)8248;
int var_2 = -1179763459;
signed char var_3 = (signed char)27;
unsigned short var_4 = (unsigned short)27022;
unsigned char var_9 = (unsigned char)18;
int zero = 0;
unsigned short var_12 = (unsigned short)30862;
_Bool var_13 = (_Bool)0;
int var_14 = -465673367;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
