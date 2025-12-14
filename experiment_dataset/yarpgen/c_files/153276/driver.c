#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-41;
unsigned short var_5 = (unsigned short)9270;
int var_7 = 183550656;
unsigned short var_8 = (unsigned short)5939;
unsigned char var_9 = (unsigned char)112;
unsigned char var_10 = (unsigned char)126;
int zero = 0;
unsigned char var_11 = (unsigned char)52;
signed char var_12 = (signed char)-81;
unsigned int var_13 = 3783042530U;
unsigned long long int var_14 = 5615773896784659623ULL;
signed char var_15 = (signed char)106;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
