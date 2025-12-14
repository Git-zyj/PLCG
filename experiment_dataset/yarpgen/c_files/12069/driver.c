#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-91;
unsigned char var_3 = (unsigned char)105;
unsigned char var_5 = (unsigned char)31;
unsigned short var_8 = (unsigned short)60105;
int zero = 0;
unsigned short var_10 = (unsigned short)58203;
signed char var_11 = (signed char)38;
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
