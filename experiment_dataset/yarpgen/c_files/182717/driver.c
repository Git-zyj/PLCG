#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 3293900124U;
unsigned short var_8 = (unsigned short)24047;
signed char var_9 = (signed char)-78;
unsigned int var_10 = 583462365U;
int zero = 0;
short var_15 = (short)9468;
unsigned char var_16 = (unsigned char)197;
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
