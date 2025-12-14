#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)233;
unsigned char var_5 = (unsigned char)82;
signed char var_7 = (signed char)44;
signed char var_8 = (signed char)-47;
unsigned int var_9 = 64411572U;
int zero = 0;
signed char var_15 = (signed char)35;
unsigned short var_16 = (unsigned short)27383;
void init() {
}

void checksum() {
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
