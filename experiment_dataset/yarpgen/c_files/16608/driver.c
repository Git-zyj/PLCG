#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)6950;
unsigned short var_2 = (unsigned short)21111;
long long int var_3 = -2337658576499635911LL;
int zero = 0;
signed char var_10 = (signed char)-48;
unsigned char var_11 = (unsigned char)154;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
