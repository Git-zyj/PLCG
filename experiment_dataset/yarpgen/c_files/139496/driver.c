#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)10;
signed char var_2 = (signed char)-76;
unsigned int var_4 = 2846999067U;
unsigned short var_10 = (unsigned short)49745;
int zero = 0;
unsigned int var_11 = 4050047903U;
unsigned int var_12 = 2168203452U;
void init() {
}

void checksum() {
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
