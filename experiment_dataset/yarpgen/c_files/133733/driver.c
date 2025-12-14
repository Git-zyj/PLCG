#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)24488;
unsigned char var_4 = (unsigned char)123;
unsigned char var_6 = (unsigned char)209;
signed char var_7 = (signed char)-88;
unsigned short var_8 = (unsigned short)32102;
unsigned long long int var_9 = 11592712049218689047ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)255;
signed char var_11 = (signed char)-43;
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
