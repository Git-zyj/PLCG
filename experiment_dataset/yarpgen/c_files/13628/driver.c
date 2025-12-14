#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)41082;
unsigned char var_7 = (unsigned char)10;
unsigned char var_9 = (unsigned char)228;
int zero = 0;
signed char var_13 = (signed char)102;
unsigned int var_14 = 3875361885U;
unsigned char var_15 = (unsigned char)239;
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
