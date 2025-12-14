#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)92;
signed char var_7 = (signed char)-95;
unsigned char var_13 = (unsigned char)188;
int var_19 = -475950175;
int zero = 0;
unsigned short var_20 = (unsigned short)10832;
unsigned int var_21 = 464384025U;
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
