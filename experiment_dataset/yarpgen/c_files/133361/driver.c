#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)95;
int var_3 = -554086327;
unsigned char var_6 = (unsigned char)144;
short var_9 = (short)-28411;
unsigned char var_10 = (unsigned char)255;
signed char var_11 = (signed char)77;
int zero = 0;
signed char var_16 = (signed char)-103;
unsigned char var_17 = (unsigned char)90;
unsigned char var_18 = (unsigned char)223;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
