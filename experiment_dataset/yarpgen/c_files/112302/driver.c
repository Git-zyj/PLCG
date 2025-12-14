#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3363694827U;
unsigned short var_4 = (unsigned short)35561;
signed char var_11 = (signed char)-26;
int zero = 0;
unsigned int var_13 = 1497660911U;
unsigned char var_14 = (unsigned char)212;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
