#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-8356;
int var_6 = 5736563;
long long int var_9 = -7085173921555641075LL;
int zero = 0;
int var_15 = 1315631782;
unsigned long long int var_16 = 15596052202859690198ULL;
unsigned char var_17 = (unsigned char)208;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
