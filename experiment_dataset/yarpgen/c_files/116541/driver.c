#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12951300187200355053ULL;
short var_2 = (short)2972;
unsigned int var_4 = 3565000221U;
unsigned int var_9 = 3655166140U;
int zero = 0;
int var_11 = 502289154;
unsigned char var_12 = (unsigned char)35;
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
