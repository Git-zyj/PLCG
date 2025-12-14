#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)65248;
unsigned long long int var_6 = 8272707000688846347ULL;
signed char var_8 = (signed char)-29;
unsigned short var_12 = (unsigned short)13001;
unsigned char var_13 = (unsigned char)246;
int zero = 0;
unsigned short var_17 = (unsigned short)27742;
signed char var_18 = (signed char)116;
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
