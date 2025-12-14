#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)69;
unsigned char var_2 = (unsigned char)22;
short var_5 = (short)31269;
unsigned char var_9 = (unsigned char)216;
int zero = 0;
unsigned char var_13 = (unsigned char)94;
unsigned char var_14 = (unsigned char)164;
int var_15 = 763476071;
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
