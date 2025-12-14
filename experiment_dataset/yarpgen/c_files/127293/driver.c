#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)54;
unsigned int var_5 = 744301730U;
unsigned short var_7 = (unsigned short)29647;
signed char var_9 = (signed char)-15;
int zero = 0;
short var_10 = (short)-31389;
unsigned int var_11 = 912698291U;
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
