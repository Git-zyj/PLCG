#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1920843216;
unsigned short var_5 = (unsigned short)46829;
unsigned short var_6 = (unsigned short)39956;
signed char var_7 = (signed char)-18;
unsigned short var_9 = (unsigned short)64331;
int zero = 0;
unsigned int var_11 = 4099837901U;
unsigned char var_12 = (unsigned char)196;
signed char var_13 = (signed char)14;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
