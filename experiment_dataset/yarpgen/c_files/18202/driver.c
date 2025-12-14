#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)54;
signed char var_8 = (signed char)-53;
unsigned short var_9 = (unsigned short)42347;
int zero = 0;
unsigned int var_13 = 1940805146U;
unsigned int var_14 = 2722800702U;
unsigned short var_15 = (unsigned short)42278;
void init() {
}

void checksum() {
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
