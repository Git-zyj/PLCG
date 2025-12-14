#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)32883;
unsigned short var_9 = (unsigned short)28465;
unsigned short var_10 = (unsigned short)16177;
unsigned short var_12 = (unsigned short)32209;
int zero = 0;
unsigned short var_13 = (unsigned short)28393;
signed char var_14 = (signed char)122;
unsigned short var_15 = (unsigned short)53171;
unsigned short var_16 = (unsigned short)41718;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
