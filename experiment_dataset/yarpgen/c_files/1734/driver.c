#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4140494480183540372ULL;
unsigned long long int var_2 = 13484110104489112475ULL;
unsigned char var_4 = (unsigned char)135;
unsigned short var_7 = (unsigned short)26394;
unsigned char var_8 = (unsigned char)35;
unsigned short var_9 = (unsigned short)25304;
unsigned short var_10 = (unsigned short)24423;
unsigned char var_12 = (unsigned char)114;
int zero = 0;
unsigned int var_15 = 2109772650U;
unsigned long long int var_16 = 5023781825489963370ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
