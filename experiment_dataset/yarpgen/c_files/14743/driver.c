#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-50;
int var_13 = 1641655485;
short var_15 = (short)29878;
signed char var_17 = (signed char)80;
int zero = 0;
unsigned char var_19 = (unsigned char)188;
signed char var_20 = (signed char)-9;
signed char var_21 = (signed char)125;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
