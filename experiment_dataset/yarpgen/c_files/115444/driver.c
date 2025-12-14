#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)74;
int var_9 = 1979432569;
unsigned short var_11 = (unsigned short)38644;
int zero = 0;
unsigned int var_12 = 3802137901U;
unsigned int var_13 = 1265942588U;
short var_14 = (short)-560;
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
