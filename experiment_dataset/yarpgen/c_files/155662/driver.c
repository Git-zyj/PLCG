#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 730824176U;
unsigned short var_5 = (unsigned short)58276;
signed char var_10 = (signed char)32;
unsigned char var_11 = (unsigned char)42;
int zero = 0;
unsigned short var_16 = (unsigned short)22749;
unsigned short var_17 = (unsigned short)25304;
unsigned int var_18 = 870419980U;
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
