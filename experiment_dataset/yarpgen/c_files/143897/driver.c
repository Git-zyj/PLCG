#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)29449;
signed char var_3 = (signed char)-52;
unsigned short var_5 = (unsigned short)40070;
unsigned short var_9 = (unsigned short)47853;
short var_11 = (short)5123;
int zero = 0;
short var_12 = (short)25379;
short var_13 = (short)658;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
