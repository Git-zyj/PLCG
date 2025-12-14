#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -1609753719;
unsigned short var_10 = (unsigned short)47553;
unsigned char var_12 = (unsigned char)26;
unsigned char var_13 = (unsigned char)26;
int zero = 0;
signed char var_14 = (signed char)-29;
unsigned int var_15 = 3474230529U;
void init() {
}

void checksum() {
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
