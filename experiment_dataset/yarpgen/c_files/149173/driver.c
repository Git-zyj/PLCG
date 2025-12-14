#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-2275;
signed char var_7 = (signed char)116;
signed char var_9 = (signed char)-5;
unsigned char var_10 = (unsigned char)183;
signed char var_12 = (signed char)-73;
short var_17 = (short)-25986;
int zero = 0;
signed char var_20 = (signed char)18;
unsigned int var_21 = 3580803556U;
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
