#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2602806894U;
unsigned int var_3 = 590310922U;
int var_7 = -8297692;
unsigned short var_8 = (unsigned short)52476;
signed char var_9 = (signed char)-89;
unsigned short var_10 = (unsigned short)8047;
int zero = 0;
long long int var_12 = 5563815991612249041LL;
unsigned char var_13 = (unsigned char)114;
unsigned int var_14 = 1936873513U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
