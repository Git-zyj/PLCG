#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -927318879;
unsigned char var_8 = (unsigned char)82;
int var_12 = 212008368;
int var_15 = 386962982;
unsigned short var_16 = (unsigned short)34815;
int zero = 0;
short var_17 = (short)16302;
unsigned char var_18 = (unsigned char)184;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
