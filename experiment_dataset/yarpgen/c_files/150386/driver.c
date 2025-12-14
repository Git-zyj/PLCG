#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)189;
unsigned short var_5 = (unsigned short)41329;
int var_7 = 1924741110;
unsigned int var_8 = 2891931444U;
int zero = 0;
signed char var_14 = (signed char)108;
unsigned char var_15 = (unsigned char)245;
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
