#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)145;
unsigned int var_2 = 1744245303U;
unsigned char var_3 = (unsigned char)184;
unsigned int var_6 = 3229539396U;
unsigned int var_9 = 2226726148U;
unsigned int var_12 = 148212976U;
int zero = 0;
unsigned int var_14 = 3297631238U;
unsigned char var_15 = (unsigned char)182;
unsigned int var_16 = 428104038U;
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
