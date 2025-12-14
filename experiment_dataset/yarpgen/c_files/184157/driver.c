#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -930886558;
int var_8 = -1984034448;
unsigned short var_9 = (unsigned short)38072;
int zero = 0;
unsigned int var_11 = 2769130275U;
unsigned char var_12 = (unsigned char)188;
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
