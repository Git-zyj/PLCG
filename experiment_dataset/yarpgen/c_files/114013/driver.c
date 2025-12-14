#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 706338127;
signed char var_5 = (signed char)82;
int var_10 = 1582988953;
int var_11 = 1056701409;
unsigned char var_12 = (unsigned char)228;
int zero = 0;
unsigned short var_14 = (unsigned short)49717;
int var_15 = 415165854;
unsigned short var_16 = (unsigned short)10973;
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
