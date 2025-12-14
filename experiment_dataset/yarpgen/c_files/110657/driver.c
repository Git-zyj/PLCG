#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_9 = (unsigned char)20;
unsigned short var_11 = (unsigned short)17233;
int zero = 0;
signed char var_12 = (signed char)-76;
unsigned char var_13 = (unsigned char)53;
unsigned char var_14 = (unsigned char)148;
signed char var_15 = (signed char)-28;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
