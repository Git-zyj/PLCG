#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 1775044128;
signed char var_9 = (signed char)31;
unsigned short var_15 = (unsigned short)17970;
int zero = 0;
signed char var_16 = (signed char)-67;
unsigned char var_17 = (unsigned char)8;
signed char var_18 = (signed char)-55;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
