#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-23;
signed char var_5 = (signed char)97;
unsigned short var_7 = (unsigned short)55644;
signed char var_10 = (signed char)94;
unsigned short var_13 = (unsigned short)25523;
short var_14 = (short)32437;
unsigned short var_15 = (unsigned short)20864;
int zero = 0;
signed char var_20 = (signed char)-106;
signed char var_21 = (signed char)81;
void init() {
}

void checksum() {
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
