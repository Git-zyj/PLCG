#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_9 = (short)17933;
unsigned int var_11 = 3887420218U;
signed char var_13 = (signed char)-105;
int zero = 0;
unsigned short var_20 = (unsigned short)59548;
unsigned char var_21 = (unsigned char)150;
unsigned int var_22 = 366178138U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
