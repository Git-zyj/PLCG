#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 954461381;
unsigned short var_2 = (unsigned short)5123;
unsigned short var_9 = (unsigned short)26781;
unsigned int var_10 = 2915921244U;
int zero = 0;
unsigned char var_11 = (unsigned char)105;
unsigned char var_12 = (unsigned char)184;
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
