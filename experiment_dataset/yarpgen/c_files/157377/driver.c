#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)148;
unsigned short var_6 = (unsigned short)29081;
signed char var_7 = (signed char)-43;
short var_8 = (short)-5646;
unsigned short var_9 = (unsigned short)61228;
int zero = 0;
unsigned char var_11 = (unsigned char)136;
signed char var_12 = (signed char)-23;
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
