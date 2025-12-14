#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)240;
unsigned char var_2 = (unsigned char)105;
unsigned short var_14 = (unsigned short)2646;
unsigned int var_17 = 3830620840U;
int zero = 0;
long long int var_19 = -164390032712992133LL;
signed char var_20 = (signed char)-69;
unsigned int var_21 = 2983564174U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
